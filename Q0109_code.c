/*Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.*/

#include <stdio.h>
int main()
{
    int n, k, i, j, maxSum = -2147483648;

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
        int currentSum = 0;

        
        for (j = 0; j < k; j++)
        {
            currentSum += arr[i + j];
        }

        
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    printf("The maximum sum of all subarrays of size %d is: %d\n", k, maxSum);

    return 0;
}