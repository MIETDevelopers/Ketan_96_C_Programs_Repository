#include <stdio.h>


void fun(int arr[],int arr2[][10]);
int main()
{
   int arr[10],arr2[10][10];

   fun(arr,arr2);

}

void fun(int arr[],int arr2[][10]){
    printf("Passing of 1d and 2d array as an argument to a function");
}