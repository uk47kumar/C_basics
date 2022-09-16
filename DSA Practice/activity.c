#include <stdio.h>
#include <conio.h>
void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int s[10], f[10], i, j, n, a[10], k = 0;
    printf("\nEnter the number of activities:");
    scanf("%d", &n);
    printf("\nEnter the start and finish time\n");
    for (i = 0; i < n; i++)
    {
        a[i] = i + 1;
        printf("A[%d]", a[i]);
        scanf("%d", &s[i]);
        scanf("%d", &f[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (f[j] > f[j + 1])
            {
                swap(&f[j], &f[j + 1]);
                swap(&s[j], &s[j + 1]);
            }
        }
    }
    printf("\nThe activities are:\t");
    printf("A[%d]", a[0]);
    for (i = 0; i < n; i++)
    {
        if (s[i] >= f[k])
        {
            printf("A[%d]", a[i]);
            k = i;
        }
    }
    printf("\n");
    getch();
}