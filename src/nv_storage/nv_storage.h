#ifndef ___NV_STORAGE_H___
#define ___NV_STORAGE_H___

#include "esp_log.h"
#include "nvs.h"

esp_err_t NVS_init(void);
esp_err_t  NVS_get_handle(nvs_handle handle);
esp_err_t NVS_read(nvs_handle handle, char* tag, int32_t data_word);
esp_err_t NVS_write(nvs_handle handle, char* tag, int32_t data_word);



#endif //___NV_STORAGE_H___
