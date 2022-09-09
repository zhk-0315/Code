#include <stdint.h>
#include <stdio.h>

int get_gcd(int a, int b)
{
    int temp = 0;
    int gcd = 1;
    int gcdTmp = 0;

    if (!a || !b) {
        return 0;
    }

    while (1) {
        while (1) {
            if (!(a & 1) && !(b & 1)) {
                gcd *= 2;
                a = a >> 1;
                b = b >> 1;
            } else if ((a & 1) && !(b & 1)) {
                b = b >> 1;
            } else if (!(a & 1) && (b & 1)) {
                a = a >> 1;
            } else {
                break;
            }
        }

        if (a > b) {
            temp = a % b;
            a = b;
            gcdTmp = b;
        } else {
            temp = b % a;
            gcdTmp = a;
        }

        if (!temp) {
            gcd *= gcdTmp;
            return gcd;
        } else {
            b = temp;
        }
    }
}

int main(int argc, char const* argv[])
{
    int num1 = 0, num2 = 0;

    printf("pls in two num:");
    scanf("%d%d", &num1, &num2);

    printf("gcd = %d\n", get_gcd(num1, num2));
    return 0;
}
