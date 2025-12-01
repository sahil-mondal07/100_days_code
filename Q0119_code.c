/*Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.*/

#include <stdio.h>
int findRepeatedElement(int arr[], int n) {
    int result = 0;

    for (int i = 0; i < n; i++) {
        result ^= arr[i];       
    }

    for (int i = 1; i <= n - 1; i++) {
        result ^= i;           
    }

    return result; 
}
int main()
{
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements (one element will be repeated):\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int repeatedElement = findRepeatedElement(arr, n);

    printf("The repeated element is: %d\n", repeatedElement);

    return 0;
}
