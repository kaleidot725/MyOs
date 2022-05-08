#pragma once

#include <cstdint>
#include <array>

#include "error.hpp"

/** @brief CONFIG_ADDRESS レジスタのIOポートアドレス */
const uint16_t kConfigAddress = 0x0cf8;

/** @brief CONFIG_DATA レジスタのIOポートアドレス */
const uint16_t kConfigData = 0x0cfc

inline std::array<Device, 32> devices;
inline int num_device;

Error ScanAllBus();