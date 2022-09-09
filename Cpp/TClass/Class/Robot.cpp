#include <iostream>

#include "Robot.hpp"

int Robot::productRobotCnt = 0;

Robot::Robot(std::string _name, Gun* _pGun)
    : name(_name)
    , pGun(_pGun)
{
    ++productRobotCnt;
}

Robot::~Robot(void)
{
    delete pGun;
    pGun = nullptr;
}

int Robot::GetRobotCnt(void)
{
    return productRobotCnt;
}

void Robot::ScrapRobot(void)
{
    --productRobotCnt;
    delete pGun;
    pGun = nullptr;
    return;
}

uint8_t Robot::Load(uint8_t bulletNum)
{
    if (pGun == nullptr) {
        std::cout << "no Gun\n";
        return -1;
    }

    return pGun->LoadGun(bulletNum);
}

uint8_t Robot::Shoot(void)
{
    if (pGun == nullptr) {
        std::cout << "no Gun\n";
        return -1;
    }

    return pGun->ShootGun();
}

int ScrapRobotByPoint(Robot** ppRb)
{
    if (ppRb == nullptr) {
        std::cout << "unkown err\n";
        return -1;
    }

    if (*ppRb == nullptr) {
        std::cout << "Robot no exist\n";
        return -1;
    }

    (*ppRb)->ScrapRobot();
    (*ppRb) = nullptr;

    return 0;
}

int RobotWight::wightRobotCnt = 0;

RobotWight::RobotWight(std::string _name, Gun* _pGun, TaskFunc_t _TaskFunc)
    : Robot(_name, _pGun)
    , TaskFunc(_TaskFunc)
{
    qnum = ++wightRobotCnt;
}

int RobotWight::BaoShu(void)
{
    std::cout << "qnum = " << qnum << "\n";
    return qnum;
}

int RobotWight::qiangqiang(RobotBlack& bRb)
{
    delete bRb.pGun;
    bRb.pGun = nullptr;
    return 0;
}

int RobotBlack::blackRobotCnt = 0;

RobotBlack::RobotBlack(std::string _name, Gun* _pGun, TaskFunc_t _TaskFunc)
    : Robot(_name, _pGun)
    , TaskFunc(_TaskFunc)
{
    qnum = ++blackRobotCnt;
}

int RobotBlack::BaoShu(void)
{
    std::cout << "qnum = " << qnum << "\n";
    return qnum;
}

int RobotBlack::qiangqiang(RobotWight& wRb)
{
    delete wRb.pGun;
    wRb.pGun = nullptr;
    return 0;
}