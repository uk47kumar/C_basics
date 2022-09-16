#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionSort(int *A, int n)
{
    int key, j;
    // Loop for passes
    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;
        // Loop for each pass
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main()
{
    int ar[50], i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter the number%d: ", i + 1);
        scanf("%d", &ar[i]);
    }
    printf("Unsorted Array are...\n");
    printArray(ar, n);
    insertionSort(ar, n);
    printf("Sorted Array using Insertion sort...\n");
    printArray(ar, n);
    return 0;
}