#include <iostream>
#include <string>

class Person {
public:
    void SetAge(int age)
    {
        this->age = age;
    }
    void GetAge(void)
    {
        std::cout << "age = " << age << std::endl;
    }
    Person& AgeAdd(void)
    {
        age++;
        std::cout << "age = " << age << std::endl;
        return *this;
    }

private:
    std::string m_name;
    int age;
};

void test01(void)
{
    Person p;
    p.SetAge(333);

    p.GetAge();
}

void test02(void)
{
    Person p;
    p.SetAge(333);

    //p.AgeAdd();
    p.AgeAdd().AgeAdd().AgeAdd().AgeAdd().AgeAdd().AgeAdd().AgeAdd().AgeAdd().AgeAdd().AgeAdd();
}

int main(int argc, char const* argv[])
{
    // test01();
    test02();
    return 0;
}
