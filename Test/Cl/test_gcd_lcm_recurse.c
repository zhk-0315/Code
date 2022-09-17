#include <stdint.h>
#include <stdio.h>
#include <unistd.h>

int32_t min(int32_t a, int32_t b)
{
    return a > b ? b : a;
}

int32_t max(int32_t a, int32_t b)
{
    return a > b ? a : b;
}

int32_t GetGcd(int32_t a, int32_t b)
{
    if (a == 0 || b == 0) {
        return 0;
    }

    if ((a & 1) == 0 && (b & 1) == 0)
        return 2 * GetGcd(a >> 1, b >> 1);
    else if ((a & 1) == 0)
        return GetGcd(a >> 1, b);
    else if ((b & 1) == 0)
        return GetGcd(a, b >> 1);
    else {
        int min = a > b ? b : a,
            max = a > b ? a : b;
        return (max % min)
            ? (GetGcd(min, max % min))
            : (min);
    }
}

int64_t GetLcm(int32_t a, int32_t b)
{
    return (int64_t)a * b / GetGcd(a, b);
}

int main(int argc, char const* argv[])
{
    int32_t a = 0, b = 0;

    printf("pls in 2 num: ");
    scanf("%d%d", &a, &b);

    printf("gcd = %d, lcm = %ld\n", GetGcd(a, b), GetLcm(a, b));

    return 0;
}
