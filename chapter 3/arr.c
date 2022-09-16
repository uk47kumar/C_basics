#include <stdio.h>

void show(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int insert(int a[], int size, int element, int index, int capacity)
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
    return 1;
}

int main()
{
    int a[6] = {1, 6, 4, 3, 5};
    int size = 5, element = 65, index = 2;
    show(a, size);
    insert(a, size, element, index, 6);
    size += 1;
    show(a, size);
    return 0;
}