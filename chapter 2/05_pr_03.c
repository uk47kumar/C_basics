/* write the program to determine wheather a number is divisible 
by 97 or not */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Divisiblity test returns %d\n", num % 97);
    return 0;
}