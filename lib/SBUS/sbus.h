#pragma once

#include <stdint.h>

#define SBUS_PACKET_LENGTH 25

void sbusPrepareChannelsPacket(uint8_t packet[SBUS_PACKET_LENGTH], int channels[]);