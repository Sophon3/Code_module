
#include "provisioner_set_state.h"

extern  esp_ble_mesh_node_info_t nodes[CONFIG_BLE_MESH_MAX_PROV_NODES];

void app_main(void)
{

    
    esp_err_t err;

    ESP_LOGI(TAG, "Initializing...");

    err = nvs_flash_init();
    if (err == ESP_ERR_NVS_NO_FREE_PAGES) {
        ESP_ERROR_CHECK(nvs_flash_erase());
        err = nvs_flash_init();
    }
    ESP_ERROR_CHECK(err);

    err = bluetooth_init();
    if (err) {
        ESP_LOGE(TAG, "esp32_bluetooth_init failed (err %d)", err);
        return;
    }

    ble_mesh_get_dev_uuid(dev_uuid);

    /* Initialize the Bluetooth Mesh Subsystem */
    err = ble_mesh_init();
    if (err) {
        ESP_LOGE(TAG, "Bluetooth mesh init failed (err %d)", err);
    }
      while (1)
     {   
    vTaskDelay(pdMS_TO_TICKS(100));
    if(nodes[0].unicast>0&&nodes[1].unicast>0&&nodes[2].unicast>0&&nodes[3].unicast>0&&nodes[4].unicast>0)
       {
        for(int i = 0;i<6;i++)
        {
            send_msg(readData(uuid_design[i]),0);
            printf("i %d\n",i);
            printf("uuid_design:%s\n",uuid_design[i]);
        }
         vTaskDelay(pdMS_TO_TICKS(500));
        for(int i = 0;i<6;i++)
        {
            send_msg(readData(uuid_design[i]),1);
            printf("i %d\n",i);
        }
        vTaskDelay(pdMS_TO_TICKS(500));
     }
    
}
}

