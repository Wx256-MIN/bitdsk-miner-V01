#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "web_server.h"
#include "global_state.h"

global_state_t g_state;

// Dummy implementations for nvs_config to allow compilation
void nvs_config_set_wifi(const char* ssid, const char* pass) {
    (void)ssid;
    (void)pass;
}

void nvs_config_set_pool(const char* host, int port, const char* user) {
    (void)host;
    (void)port;
    (void)user;
}

void app_main(void)
{
    g_state.mutex = xSemaphoreCreateMutex();
    web_server_start();
    
    while(1) {
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
