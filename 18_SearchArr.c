#include <stdio.h>
void main(){  
    int num;
    int i,  keynum, result = 0;
 
    printf("Enter the number of elements: \n");
    scanf("%d", &num);//get sum
    int array[num];
    printf("Enter the elements one by one: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]); //searching
    }
 
    printf("Enter querry ");
    scanf("%d", &keynum);
    // 
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            result = 1;
            break;
        }
    }
    //Output
    if (result == 1) 
        printf("Element at position %d .",i+1);
    else
        printf("Element not found.\n");
}