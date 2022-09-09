#pragma once

#include <cstdint>
#include <string>

class Gun {
public:
    Gun(std::string _gunType, uint8_t _maxBulletCnt);
    uint8_t LoadGun(uint8_t& bulletNum);
    uint8_t ShootGun(void);
private:
    std::string gunType;
    uint8_t maxBulletCnt;
    uint8_t bulletCnt;
};