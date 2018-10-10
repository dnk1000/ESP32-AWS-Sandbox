    /* Non-Volatile Storage (NVS) Read and Write a Value - Example
   For other examples please check:
   https://github.com/espressif/esp-idf/tree/master/examples
   This example code is in the Public Domain (or CC0 licensed, at your option.)
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "nvs_flash.h"
#include "nvs.h"
#include "esp_log.h"


static const char *TAG = "NVS";

/**********************************************
 * function to initialize non-volitile memory
 **********************************************/
 esp_err_t NVS_init(void)
 {

    esp_err_t err = ESP_OK;

    err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES || err == ESP_ERR_NVS_NEW_VERSION_FOUND) 
    {
        // NVS partition was truncated and needs to be erased
        // Retry nvs_flash_init
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }
    ESP_ERROR_CHECK( err );
    return err;
}
/**********************************************
 * function to get nvs handle
 **********************************************/
esp_err_t  NVS_get_handle(nvs_handle handle)
{
    esp_err_t   err =   ESP_OK;

    ESP_LOGI(TAG, "Opening Non-Volatile Storage (NVS) handle... ");

    err = nvs_open("storage", NVS_READWRITE, &handle);
    
    if (err != ESP_OK) 
    {
        ESP_LOGI(TAG,"Error (%s) opening NVS handle!\n", esp_err_to_name(err));
    } 
    else{   
        ESP_LOGI(TAG,"Done\n");
    }

    return err;
}
/**********************************************
 * function to read nvs data
 **********************************************/
esp_err_t NVS_read(nvs_handle handle, char* tag, int32_t data_word)
{
    esp_err_t   err =   ESP_OK;
    
    ESP_LOGI(TAG,"Reading restart counter from NVS ... ");

    err = nvs_get_i32(handle, tag, &data_word);
        switch (err) {
            case ESP_OK:
                 ESP_LOGI(TAG,"Done\n");
                 ESP_LOGI(TAG,"%s = %d\n",tag, data_word);
                break;
            case ESP_ERR_NVS_NOT_FOUND:
                 ESP_LOGI(TAG,"The value is not initialized yet!\n");
                break;
            default :
                 ESP_LOGI(TAG,"Error (%s) reading!\n", esp_err_to_name(err));
        }

    return err;
}

/**********************************************
 * function to write nvs data
 **********************************************/
esp_err_t NVS_write(nvs_handle handle, char* tag, int32_t data_word)
{
    esp_err_t   err =   ESP_OK;
    ESP_LOGI(TAG,"Updating restart counter in NVS ... ");

    err = nvs_set_i32(handle, tag, data_word);
    if(err != ESP_OK)
        ESP_LOGI(TAG, "Failed!");
    else
        ESP_LOGI(TAG, "Done");

    // Commit written value.
    // After setting any values, nvs_commit() must be called to ensure changes are written
    // to flash storage. Implementations may write to storage at other times,
    // but this is not guaranteed.
    ESP_LOGI(TAG,"Committing updates in NVS ... ");
    err = nvs_commit(handle);
       if(err != ESP_OK)
        ESP_LOGI(TAG, "Failed!");
    else
        ESP_LOGI(TAG, "Done");

    // Close
        nvs_close(handle);

    return err;

}

   