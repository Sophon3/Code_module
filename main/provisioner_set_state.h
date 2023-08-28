#ifndef _PROVISIONER_SET_STATE_H_
#define _PROVISIONER_SET_STATE_H_

#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#include "esp_log.h"
#include "nvs_flash.h"

#include "esp_ble_mesh_defs.h"
#include "esp_ble_mesh_common_api.h"
#include "esp_ble_mesh_provisioning_api.h"
#include "esp_ble_mesh_networking_api.h"
#include "esp_ble_mesh_config_model_api.h"
#include "esp_ble_mesh_generic_model_api.h"

#include "ble_mesh_example_init.h"

#define TAG "EXAMPLE"

typedef struct {
    uint8_t  uuid[16];
    uint16_t unicast;
    uint8_t  elem_num;
    uint8_t  onoff;
} esp_ble_mesh_node_info_t;

static uint8_t dev_uuid[16];
char uuid_design[10][20] = { 
"aaaa84f70332f78a",
"aaaaecda3b184b92",
"aaaa84f70331862e",
"aaaadc5475924a4a",
"aaaa84f703331b26",
"aaaadc5475923ade",
};


void send_msg(uint16_t, uint8_t);
int readData(const char*);
void writeData(const char* , int);
static esp_err_t ble_mesh_init(void);

#endif