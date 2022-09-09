#include <iostream>

#include "Robot.hpp"

int main(int argc, char const* argv[])
{
    RobotWight wRb1 { "wightRb1", new Gun { "AK47", 32 }, nullptr };
    RobotBlack bRb1 { "blackRb1", new Gun { "M16", 48 }, nullptr };

    wRb1.Load(66);

    bRb1.qiangqiang(wRb1);

    wRb1.Load(66);


    return 0;
}
