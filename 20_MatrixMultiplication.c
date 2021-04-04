#include <stdio.h>

void getMatrix(int arr[][100],int r,int c){
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("Enter arr[%d][%d]", i, j);
        scanf("%d",arr[i][j]);
    } 
 }
}

void mMultiplication(int arr1[][100],int arr2[][100],int result[][100],int r1,int c1,int r2,int c2){
for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j] = 0;
            for (int c = 0; c < r2; c++)
            {
                result[i][j] += arr1[i][c] * arr2[c][j];
            }
        }
    }
}

void DisplayMatrix(int arr[][100],int r,int c){
for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr1[100][100];
    int arr2[100][100];
    int result[100][100];
    
    int m, n, r, s;
    printf("enter no of rows for first array : m\n");
        scanf("%d", m);
    printf("enter no of column for first array : n\n");
        scanf("%d", n);
    printf("enter no of rows for second array : r\n");
        scanf("%d", r);
    printf("enter no of column for second array : s\n");
        scanf("%d", s);

    if(n==r){
        getMatrix(arr1,m,n);
        getMatrix(arr2,r,s);
        mMultiplication(arr1,arr2,result,m,n,r,s);
        DisplayMatrix(result,m,s);

    }   
    else {
        printf("Please enter a valid matrix combination\n");
        printf("Column of matrix one Should match the Row of matrix two");
    }
    return 0;
}