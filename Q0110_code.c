/*Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.*/

#include <stdio.h>
int main()
{
    int n, k, i, j, maxElement;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the size of subarray (k): ");
    scanf("%d", &k);

    
    for (i = 0; i <= n - k; i++)
    {
        maxElement = arr[i]; 

        
        for (j = 1; j < k; j++)
        {
            if (arr[i + j] > maxElement)
            {
                maxElement = arr[i + j];
            }
        }

        printf("%d ", maxElement);
    }
    printf("\n");

    return 0;
}