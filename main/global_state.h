#ifndef GLOBAL_STATE_H
#define GLOBAL_STATE_H
#include "freertos/FreeRTOS.h"
#include "freertos/semphr.h"
#include <stdbool.h>

typedef struct {
    SemaphoreHandle_t mutex;
    double expected_hashrate_ghs;
    double chip_temp_c;
    double vr_temp_c;
    double current_frequency_mhz;
    double current_voltage_mv;
    double power_watts;
    double input_voltage_mv;
    double current_ma;
    double fan_percent;
    double fan_rpm;
    bool wifi_connected;
    char ip_addr[16];
    bool stratum_connected;
    double pool_difficulty;
    uint32_t shares_accepted;
    uint32_t shares_rejected;
    double best_difficulty;
    bool overheat_mode;
    bool asic_initialized;
} global_state_t;

extern global_state_t g_state;
#endif
