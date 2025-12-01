/*Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number*/

#include <stdio.h>
int findMissingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2; 
    int arraySum = 0;

    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
    }

    return totalSum - arraySum; 
}
int main()
{
    int n, i;

    printf("Enter the size of the array (n): ");
    scanf("%d", &n);

    int arr[n - 1]; 

    printf("Enter %d elements (integers between 0 to %d with one missing):\n", n - 1, n);
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int missingNumber = findMissingNumber(arr, n - 1);

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}