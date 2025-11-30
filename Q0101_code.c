//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>
int main()
{
    int n, i, target;
    int firstIndex = -1, lastIndex = -1;

    printf("Enter the number of elements in the sorted array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search for: ");
    scanf("%d", &target);

    
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            if (firstIndex == -1)
            {
                firstIndex = i;
            }
            lastIndex = i;
        }
    }

    printf("First and last occurrence of %d are at indices: %d, %d\n", target, firstIndex, lastIndex);

    return 0;
}