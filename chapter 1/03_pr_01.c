#include <stdio.h>

int main()
{
    int length, breath;
    printf("Enter the value of length\n");
    scanf("%d", &length);

    printf("Enter the value of breath\n");
    scanf("%d", &breath);

    printf("The area of a rectangle is %d", length * breath);

    return 0;
}