#include "ClCpp.hpp"
#include "Cpp.hpp"

Student St { new char[] { "zhang" }, 22 };

const char* ClGetSName(void)
{
    return St.GetSName();
}

int ClGetAge(void)
{
    return St.GetAge();
}