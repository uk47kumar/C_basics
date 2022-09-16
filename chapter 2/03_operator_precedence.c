#include <stdio.h>

int main()
{
    int x = 3;
    int y = 3;
    int z = 6;
    printf("The value of 4*x+2*y is %d\n", 4 * x + 2 * y);
    printf("The value of 4*x+2*y is %d\n", (4 * x) + (2 * y));
    printf("The value of 4 * x / 2 - y is %d\n", 4 * x / 2 - y);     // will give wrong answer
    printf("The value of 4 * (x / 2) - y is %d\n", 4 * (x / 2) - y); //use pranthesis for right BODMAS calculation
    printf("The value of x * y / z is %d\n", x * z / y);
    printf("The value of (x * y) / z is %d\n", (x * z) / y);
    return 0;
}