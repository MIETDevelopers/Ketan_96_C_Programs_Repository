#include <stdio.h>
int main()
{
    int i;
    int arr[5], max, index;
    printf("Please enter numbers:\n ");
    for (i = 0; i < 5; ++i)
    {
        scanf("%d", &arr[i]); //get value
    }
    max = arr[0];
    index = 0;
    for (i = 1; i < 5; ++i)
    {
        if (arr[i] > max)
            max = arr[i];
        index = i;
    }
    printf("Largest element = %d", max);
    printf("Index of element = %d", index);

    return 0;
}