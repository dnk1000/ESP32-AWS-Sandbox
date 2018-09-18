/* I2C Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "driver/gpio.h"
#include "driver/i2c.h"
#include "driver/uart.h"
#include "esp_wifi.h"
#include "xi2c.h"
#include "fonts.h"
#include "ssd1306.h"
#include "nvs_flash.h"
#include "hw_init.h"
#include "AWS/aws_iot.h"
#include "esp_log.h"


#define LED (13)
TaskHandle_t    display_test_HANDLE;
TaskHandle_t    led_blink_HANDLE;
TaskHandle_t    console_test_HANDLE;
TaskHandle_t    aws_iot_HANDLE;

static void display_test_THREAD(void *pvParameters);
static void led_blink_THREAD(void *pvParameters);
static void console_test_THREAD(void *pvParameters);


void app_main()
{
    

    //nvs_flash_init();

    i2c_example_master_init();
    SSD1306_Init();

    SSD1306_GotoXY(0, 0); 
    SSD1306_Puts("_PxC IIOT Sandbox_", &Font_7x10, SSD1306_COLOR_WHITE); 
    SSD1306_UpdateScreen();

    
    initialise_wifi();

    xTaskCreate(display_test_THREAD,"display_test_THREAD",      2 * 1024,   NULL, 12,   display_test_HANDLE);
    xTaskCreate(led_blink_THREAD,   "led_blink_THREAD",         2 * 1024,   NULL, 11,   led_blink_HANDLE);
    xTaskCreate(console_test_THREAD,"console_test_THREAD",      2 * 1024,   NULL, 10,   console_test_HANDLE);
 //   xTaskCreatePinnedToCore(&aws_iot_THREAD, "aws_iot_THREAD",  16 * 1024,   NULL, 5,   aws_iot_HANDLE, 1);
}


/***************************************************************************
 * Private functions
 * 
 * *************************************************************************/
 

 /************************************************
  * console_test_THREAD
  * 
  * *********************************************/
static void console_test_THREAD(void *pvParameters)
{
    static int counter = 0;
    while(1){
         ESP_LOGI("console_test_THREAD", "Counter = %i\r",counter);
        vTaskDelay(1000 / portTICK_RATE_MS);
    }
}
 /************************************************
  * display_test_THREAD
  * 
  * *********************************************/
static void display_test_THREAD(void *pvParameters)
{
    char counter = 0;
    char temp_text[20];

    while (1) {
        SSD1306_GotoXY(0, 53); 
        sprintf(temp_text,"Busy Count: %d",counter++);
        SSD1306_Puts(temp_text, &Font_7x10, SSD1306_COLOR_WHITE); 
        SSD1306_UpdateScreen();
        ESP_LOGI("display_test_THREAD", "Counter = %i\r",counter);
        vTaskDelay(100 / portTICK_RATE_MS);
    }
    
}
 /************************************************
  * led_blink_THREAD
  * 
  * *********************************************/
static void led_blink_THREAD(void *pvParameters)
{
    gpio_pad_select_gpio(LED);
    gpio_set_direction(LED, GPIO_MODE_OUTPUT);
    while (1) {
        
        gpio_set_level(LED, 0);     // LED ON, active low
        vTaskDelay(200 / portTICK_RATE_MS);
        
        gpio_set_level(LED, 1);
        vTaskDelay(200 / portTICK_RATE_MS);
    }
     ESP_LOGI("led_blink_THREAD", "BLINK\r");

}