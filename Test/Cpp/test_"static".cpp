#include <iostream>

class Class {
public:
    static int GetParam(void)
    {
        return param;
    }

private:
    static int param;
};

int Class::param = 100;

int main(int argc, char const* argv[])
{
    std::cout << Class::param << std::endl;

    return 0;
}
