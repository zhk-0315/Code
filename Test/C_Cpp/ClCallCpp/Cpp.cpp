#include "Cpp.hpp"

Student::Student(char* _SName, int _age)
    : SName(_SName)
    , age(_age)
{
}

Student::~Student(void)
{
    delete this->SName;
    this->SName=nullptr;
}

const char* Student::GetSName(void)
{
    return SName;
}

int Student::GetAge(void)
{
    return age;
}