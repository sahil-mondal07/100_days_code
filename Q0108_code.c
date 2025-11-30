//Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
int main()
{
    int n, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int answer[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    for (i = 0; i < n; i++)
    {
        int product = 1;

        
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                product *= arr[j];
            }
        }

        answer[i] = product;
    }

    printf("The resulting array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", answer[i]);
    }
    printf("\n");

    return 0;
}