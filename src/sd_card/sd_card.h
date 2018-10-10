#ifndef ___SD_CARD_H___
#define ___SD_CARD_H___

#include "esp_err.h"
#include "driver/sdmmc_host.h"

esp_err_t init_sd_card(void);
void  sd_card_get_info(sdmmc_card_t* card);
esp_err_t  sd_card_create_file(sdmmc_card_t* card);
esp_err_t sd_card_rename_file(void);
esp_err_t sd_card_open_file(void);
void sd_card_unmount(void);

#endif // ___SD_CARD_H___
