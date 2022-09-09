#pragma once

#include <cstdint>
#include <string>

#include "Gun.hpp"

class Robot {
public:
    static int productRobotCnt;
    Robot(std::string _name, Gun* _pGun);
    ~Robot(void);
    int GetRobotCnt(void);
    void ScrapRobot(void);
    uint8_t Load(uint8_t bulletNum);
    uint8_t Shoot(void);

protected:
    std::string name;
    Gun* pGun;
};

int ScrapRobotByPoint(Robot** ppRb);

typedef int (*TaskFunc_t)(void);

class RobotWight;
class RobotBlack;

class RobotWight : public Robot {
public:
    static int wightRobotCnt;
    RobotWight(std::string _name, Gun* _pGun, TaskFunc_t _TaskFunc);
    int BaoShu(void);
    friend class RobotBlack;
    int qiangqiang(RobotBlack& bRb);

private:
    int qnum;
    TaskFunc_t TaskFunc;
};

class RobotBlack : public Robot {
public:
    static int blackRobotCnt;
    RobotBlack(std::string _name, Gun* _pGun, TaskFunc_t _TaskFunc);
    int BaoShu(void);
    friend class RobotWight;
    int qiangqiang(RobotWight& wRb);

private:
    int qnum;
    TaskFunc_t TaskFunc;
};