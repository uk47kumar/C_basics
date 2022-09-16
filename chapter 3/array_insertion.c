#include <stdio.h>

void show(int a[], int n)
{
    printf("\nElement in array are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int Insert(int a[], int size, int element, int index, int capacity)
{
    if (size > capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }
    a[index] = element;
    printf("\nAfter inserting: ");
    return 1;
}
int main()
{
    int a[7] = {4, 8, 9, 2, 5, 6};
    int size = 6, element = 45, index = 1;
    show(a, size);
    Insert(a, size, element, index, 7);
    size += 1;
    show(a, size);
    return 0;
}