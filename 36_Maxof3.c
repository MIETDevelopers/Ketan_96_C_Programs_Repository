#include<stdio.h> // header file

int main(){
    int a,b,c;
    printf("Enter 3 no.");
    scanf("%d %d %d",a,b,c); // enter 3 no.

    if(a>b&&a>c){
        printf("A is the greatest");
    }
    else {
        if (b>c)
        {
            printf("b is the greater"); 
          
        }
          else{
                printf("c is the greater"); 
            }
        
    }

    return 0;
}