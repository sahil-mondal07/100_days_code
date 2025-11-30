//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>
int main()
{
    int n, i, j, count, majorityElement = -1;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++)
    {
        count = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        
        if (count > n / 2)
        {
            majorityElement = arr[i];
            break; 
        }
    }

    printf("The majority element is: %d\n", majorityElement);

    return 0;
}