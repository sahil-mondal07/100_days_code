/*Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.*/

#include <stdio.h>
int main()
{
    int m, n, i, j, k;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);

    int arr1[m];

    printf("Enter %d elements for the first sorted array:\n", m);
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n);

    int arr2[n];

    printf("Enter %d elements for the second sorted array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int mergedArr[m + n];
    i = 0; 
    j = 0; 
    k = 0; 

    
    while (i < m && j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            mergedArr[k++] = arr1[i++];
        }
        else
        {
            mergedArr[k++] = arr2[j++];
        }
    }

    
    while (i < m)
    {
        mergedArr[k++] = arr1[i++];
    }

    
    while (j < n)
    {
        mergedArr[k++] = arr2[j++];
    }

    
    printf("Merged sorted array:\n");
    for (i = 0; i < m + n; i++)
    {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");

    return 0;
}
