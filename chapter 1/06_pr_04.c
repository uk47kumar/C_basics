#include <stdio.h>

int main()
{
    int principal = 100, rate = 4, year = 1;
    int simpleIntrest = (principal * rate * year) / 100;
    printf("The value of simple intrest is %d", simpleIntrest);
    return 0;
}