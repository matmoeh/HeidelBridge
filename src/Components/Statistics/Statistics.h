#pragma once

struct Statistics
{
    uint32_t NumModbusReadErrors = 0;
    uint32_t NumModbusWriteErrors = 0;
    uint32_t NumWifiDisconnects = 0;
    uint32_t NumMqttDisconnects = 0;
    uint64_t UptimeS = 0;
    int8_t  WifiRSSI = -127;
    uint32_t freeHeap = 0;
    uint64_t lastHttpRequest = 0;
    uint64_t lastModbusRead = 0;
    uint64_t lastModbusWrite = 0;
};

// Global statistics instance
extern Statistics gStatistics;