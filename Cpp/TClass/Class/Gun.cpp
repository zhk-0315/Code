#include <iostream>

#include "Gun.hpp"

Gun::Gun(std::string _gunType, uint8_t _maxBulletCnt)
    : gunType(_gunType)
    , maxBulletCnt(_maxBulletCnt)
    , bulletCnt(0)
{
}

uint8_t Gun::LoadGun(uint8_t& bulletNum)
{
    if (bulletCnt < maxBulletCnt) {
        bulletCnt += bulletNum;
    }

    if(bulletCnt >= maxBulletCnt) {
        std::cout << "bullet full" << std::endl;
        bulletCnt = maxBulletCnt;
    }

    return bulletCnt;
}

uint8_t Gun::ShootGun(void)
{
    if(bulletCnt > 0){
        --bulletCnt;
        std::cout << ">>> \n";
    } else {
        std::cout << "bullet empty" << std::endl;
    }

    return bulletCnt;
}

