#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}
void countSort(int *A, int n)
{
    int i, j;
    // Find the maximum element in A
    int max = maximum(A, n);

    // Create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int));

    // Initialize the array elements to 0
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }

    i = 0; // counter for count array
    j = 0; // counter for given array A

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[50], i, n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("Enter the number%d: ", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Unsorted Array are...\n");
    printArray(A, n);
    countSort(A, n);
    printf("Sorted Array using count sort...\n");
    printArray(A, n);
    return 0;
}