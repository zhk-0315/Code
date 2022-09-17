#include <iostream>
#include <string>

class Person {
public:
    Person(int age)
        : m_age(age)
    {
    }
    // 常函数
    int GetMemAge(void) const
    {
        //m_age = 100;  //const 修饰的成员函数不能更改属性的值
        return m_age;
    }

private:
    int m_age;
};

void test01(void)
{
    Person p{200};

    std::cout << "age = " << p.GetMemAge() << std::endl;
}

int main(int argc, char const* argv[])
{
    test01();

    return 0;
}