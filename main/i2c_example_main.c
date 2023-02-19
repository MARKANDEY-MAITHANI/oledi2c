/* i2c - Example

   For other examples please check:
   https://github.com/espressif/esp-idf/tree/master/examples

   See README.md file to get detailed usage of this example.

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "esp_log.h"
#include "driver/i2c.h"
#include "sdkconfig.h"
#include "u8g2.h"

#include "sdkconfig.h"
#include "u8g2_esp32_hal.h"


extern void task_test_SSD1306i2c(void *ignore);

void app_main(void)
{
   
    xTaskCreate(task_test_SSD1306i2c, "task_test_SSD1306i2c", 1024 * 10, (void *)1, 10, NULL);
}
