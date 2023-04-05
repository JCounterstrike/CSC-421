#include <stdio.h>
#include <stdlib.h>

int main ()
{
    union {
        double d;
        unsigned long long u;
    } p;

    p.d = -13.0;
    unsigned long long sign = (p.u >> 63) & 1;
    unsigned long long exp = (p.u >> 52) & 0x7ff;

    unsigned long long coef_mask = (1ull << 52) - 1;
    unsigned long long coef = p.u & coef_mask;

    printf("%llu\n", sign);
    printf("%llu\n", exp);
    printf("0x%llx\n", coef);
    
    return 0;
}
