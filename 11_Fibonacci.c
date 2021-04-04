#include<stdio.h>
 
int main(){
   int n, fst = 0, scnd = 1, nxt, i; //Variables
 
   printf("Enter the number of terms\n");
   scanf("%d",&n); //Get value
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( i = 0 ; i < n ; i++ ) 
   {
      if ( i <= 1 )
         nxt = i;
      else
      {
         //fibonacci
         nxt = fst + scnd;
         fst = scnd;
         scnd = nxt;
      }
      printf("%d\n",nxt); //output
   }
   return 0;
}