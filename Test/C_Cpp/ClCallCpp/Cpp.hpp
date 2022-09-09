#pragma once

#include <string>

class Student {
public:
    Student(char* _SName, int _age);
    ~Student(void);
    const char* GetSName(void);
    int GetAge(void);

private:
    char* SName;
    int age;
};