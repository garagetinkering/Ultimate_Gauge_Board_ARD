#pragma once

#include <esp32_can.h>

#define CAN_TXD_PIN     (gpio_num_t)5
#define CAN_RXD_PIN     (gpio_num_t)4

#define CANBUS_SPEED    500000   // 500kbps

void CANBus_Init();