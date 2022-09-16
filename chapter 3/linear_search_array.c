#include <stdio.h>

int LinearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 6, 2, 76, 43, 23, 796, 34, 1};
    int size = sizeof(arr) / sizeof(int);
    int element = 23;
    int Search_Index = LinearSearch(arr, size, element);
    printf("The element %d was found at index %d\n", element, Search_Index);
    return 0;
}