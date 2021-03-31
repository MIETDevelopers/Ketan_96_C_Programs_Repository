#include<stdio.h>
int main()
{
    int arr[10];
    int sum =0;
    int i;
    printf("enter the values of array");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    printf("Sum of elements in array is %d",sum);
}