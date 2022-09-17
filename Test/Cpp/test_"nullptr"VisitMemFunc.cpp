#include <iostream>
#include <string>

class Preson {
public:
    Preson(void)
    {
    }
    Preson(std::string name)
        : m_name(name)
    {
    }
    Preson(const Preson& p)
    {
        this->m_name = p.m_name;
    }

    void func01(void)
    {
        std::cout << __FUNCTION__ << std::endl;
    }

    void func02(void)
    {
        if (this == nullptr || this == NULL) {
            std::cout << __FUNCTION__ << "obj is null" << std::endl;
            return;
        }

        std::cout << __FUNCTION__ << "m_name = " << m_name << std::endl;
    }

private:
    std::string m_name;
};

void test01(void)
{
    Preson* p = nullptr;
    Preson* p1 = new Preson[3] {
        Preson { "aaa" },
        Preson { "bbb" },
        Preson { "ccc" },
    };

    p->func01();
    p->func02();

    for (int i = 0; i < 3; i++) {
        p1[i].func02();
    }
}

int main(int argc, char const* argv[])
{
    test01();

    return 0;
}