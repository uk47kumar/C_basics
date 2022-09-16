#include <stdio.h>
// Traversal
void show(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        printf(" ");
    }
}
// Inseretion
int Insertion(int a[], int size, int element, int capacity, int index)
{
    if (size >= capacity)
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
    int a[6] = {4, 5, 6, 7, 9};
    int size = 5, element = 45, index = 2;
    Insertion(a, size, element, 6, index);
    size += 1;
    show(a, size);
    return 0;
}