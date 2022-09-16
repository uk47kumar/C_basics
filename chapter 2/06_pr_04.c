// step by step evolution of 3*x/y-z+k
#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    /* 6/3-3+1
2-3+1
-1+1
0 */
    printf("The value of result %d", result);
    return 0;
}