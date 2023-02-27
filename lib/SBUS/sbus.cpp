#include "sbus.h"
#include <Arduino.h>

void sbusPrepareChannelsPacket(uint8_t packet[SBUS_PACKET_LENGTH], int channels[])
{
    // SBUS Header
    packet[0] = 0x0F;
    packet[1] = (uint8_t)(channels[0] & 0x07FF);
    packet[2] = (uint8_t)((channels[0] & 0x07FF) >> 8 | (channels[1] & 0x07FF) << 3);
    packet[3] = (uint8_t)((channels[1] & 0x07FF) >> 5 | (channels[2] & 0x07FF) << 6);
    packet[4] = (uint8_t)((channels[2] & 0x07FF) >> 2);
    packet[5] = (uint8_t)((channels[2] & 0x07FF) >> 10 | (channels[3] & 0x07FF) << 1);
    packet[6] = (uint8_t)((channels[3] & 0x07FF) >> 7 | (channels[4] & 0x07FF) << 4);
    packet[7] = (uint8_t)((channels[4] & 0x07FF) >> 4 | (channels[5] & 0x07FF) << 7);
    packet[8] = (uint8_t)((channels[5] & 0x07FF) >> 1);
    packet[9] = (uint8_t)((channels[5] & 0x07FF) >> 9 | (channels[6] & 0x07FF) << 2);
    packet[10] = (uint8_t)((channels[6] & 0x07FF) >> 6 | (channels[7] & 0x07FF) << 5);
    packet[11] = (uint8_t)((channels[7] & 0x07FF) >> 3);
    packet[12] = (uint8_t)((channels[8] & 0x07FF));
    packet[13] = (uint8_t)((channels[8] & 0x07FF) >> 8 | (channels[9] & 0x07FF) << 3);
    packet[14] = (uint8_t)((channels[9] & 0x07FF) >> 5 | (channels[10] & 0x07FF) << 6);
    packet[15] = (uint8_t)((channels[10] & 0x07FF) >> 2);
    packet[16] = (uint8_t)((channels[10] & 0x07FF) >> 10 | (channels[11] & 0x07FF) << 1);
    packet[17] = (uint8_t)((channels[11] & 0x07FF) >> 7 | (channels[12] & 0x07FF) << 4);
    packet[18] = (uint8_t)((channels[12] & 0x07FF) >> 4 | (channels[13] & 0x07FF) << 7);
    packet[19] = (uint8_t)((channels[13] & 0x07FF) >> 1);
    packet[20] = (uint8_t)((channels[13] & 0x07FF) >> 9 | (channels[14] & 0x07FF) << 2);
    packet[21] = (uint8_t)((channels[14] & 0x07FF) >> 6 | (channels[15] & 0x07FF) << 5);
    packet[22] = (uint8_t)((channels[15] & 0x07FF) >> 3);
    packet[23] = (uint8_t)0b0000;
    packet[24] = (uint8_t)0x0;
}