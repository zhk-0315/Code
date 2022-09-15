#include <iostream>
#include <string>

class OverLoad {
public:
    OverLoad(int _aa, int _bb, int _cc)
        : aa(_aa)
        , bb(_bb)
        , cc(_cc)
    {
    }
    OverLoad()
    {
    }
    void print(int prama)
    {
        std::cout << "print int:" << prama << std::endl;
    }
    void print(float prama)
    {
        std::cout << "print float:" << prama << std::endl;
    }
    void print(std::string prama)
    {
        std::cout << "print string:" << prama << std::endl;
    }

    OverLoad operator+(const OverLoad& tmp)
    {
        OverLoad sum;
        sum.aa = this->aa + tmp.aa;
        sum.bb = this->bb + tmp.bb;
        sum.cc = this->aa + tmp.cc;
        return sum;
    }

    OverLoad operator*(const OverLoad& tmp)
    {
        OverLoad product;
        product.aa = this->aa * tmp.aa;
        product.bb = this->bb * tmp.bb;
        product.cc = this->aa * tmp.cc;
        return product;
    }

    void display(std::string info)
    {
        std::cout
            << "this obj -> " << info << " :" << std::endl
            << "\taa = " << aa << std::endl
            << "\tbb = " << bb << std::endl
            << "\tcc = " << cc << std::endl;
    }

private:
    int aa;
    int bb;
    int cc;
};

int main(int argc, char const* argv[])
{
    OverLoad overload { 3, 4, 5 };
    OverLoad tmp { 7, 8, 9 };
    OverLoad sum;
    OverLoad product;

    overload.display("overload");
    tmp.display("tmp");

    overload.print(111);
    overload.print(111.0f);
    overload.print("111");

    sum = overload + tmp;
    sum.display("sum");
    product = overload * tmp;
    product.display("product");

    return 0;
}
