#include <stdio.h>
int main()
{
   int n, i, cnt = 0;
 
    printf("Enter the Number.\n");
    scanf("%d",&n);//get n
 
    for(i=2; i<=n/2; ++i)
    {
        
        if(n%i==0)
        {
            cnt=1;
            break;
        }
    }
    if (cnt==0)
        printf("%d is a Prime number.",n);
    else
        printf("%d is not a Prime number.",n);
 
    getchar();    
}