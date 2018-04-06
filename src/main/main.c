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


#define LED (13)


static void display_test_THREAD(void *pvParameters);
static void led_blink_THREAD(void *pvParameters);
static void console_test_THREAD(void *pvParameters);

void app_main()
{
    TaskHandle_t th[12];

    //nvs_flash_init();

    i2c_example_master_init();
    SSD1306_Init();

    SSD1306_GotoXY(0, 0); 
    SSD1306_Puts("_PxC IIOT Sandbox_", &Font_7x10, SSD1306_COLOR_WHITE); 
    SSD1306_UpdateScreen();

    
    initialise_wifi();

    xTaskCreate(display_test_THREAD,"display_test_THREAD",  2048,   NULL, 12,   th[0]);
    xTaskCreate(led_blink_THREAD,   "led_blink_THREAD",     2048,   NULL, 11,   th[1]);
    xTaskCreate(console_test_THREAD,"console_test_THREAD",  2048,   NULL, 10,   th[2]);
    xTaskCreatePinnedToCore(&aws_iot_task, "aws_iot_task",  9216,   NULL, 5,   th[3], 1);
}


/***************************************************************************
 * Private functions
 * 
 * *************************************************************************/
 
static void console_test_THREAD(void *pvParameters)
{
    static int counter = 0;
    while(1){
        printf("Hello Phoenix Contact %d\r\n",counter++);
        vTaskDelay(1000 / portTICK_RATE_MS);
    }
}

static void display_test_THREAD(void *pvParameters)
{
    char counter = 0;
    char temp_text[20];

    while (1) {
        SSD1306_GotoXY(0, 53); 
        sprintf(temp_text,"Busy Count: %d",counter++);
        SSD1306_Puts(temp_text, &Font_7x10, SSD1306_COLOR_WHITE); 
        SSD1306_UpdateScreen();
        
        vTaskDelay(100 / portTICK_RATE_MS);
    }
    
}

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

}