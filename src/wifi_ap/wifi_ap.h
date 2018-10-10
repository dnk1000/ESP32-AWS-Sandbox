#ifndef ___WIFI_AP_H___
#define ___WIFI_AP_H___



#define SSID        "Platypus_AP"
#define AP_PASSWORD "letmein12"

#define AP_SSID "Platypus_AP"
#define AP_PASSPHARSE "letmein12"
#define AP_SSID_HIDDEN 0
#define AP_MAX_CONNECTIONS 4
#define AP_AUTHMODE WIFI_AUTH_WPA2_PSK // the passpharese should be atleast 8 chars long
#define AP_BEACON_INTERVAL 100 // in milli seconds


// void initialise_wifi_AP(void); 
void wifi_ap_start();
void printStationList();
void print_sta_info(void *pvParam);

#endif  //___WIFI_AP_H___