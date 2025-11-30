//Delete an element from an array.

#include <stdio.h>
int main()
{
    int n, i, element, position, found = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &element);

    
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            position = i;
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Element %d not found in the array.\n", element);
        return 1;
    }

    
    for (i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion:\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}