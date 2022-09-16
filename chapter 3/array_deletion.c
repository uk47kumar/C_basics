#include <stdio.h>

void show(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int Deletion(int a[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        a[i] = a[i + 1];
    }
}
int main()
{
    int a[5] = {5, 4, 2, 1, 6};
    int size = 5, index = 1;
    show(a, size);
    Deletion(a, size, index);
    size -= 1;
    show(a, size);
    return 0;
}