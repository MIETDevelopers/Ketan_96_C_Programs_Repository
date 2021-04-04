#include <stdio.h>
int main()
{
  int num, rem, Sum=0;

  printf("Please Enter any number\n");
  scanf("%d", &num);//get num

  while(num > 0)//while loop.
  {
 
     rem = num % 10;
     Sum = Sum+rem;
     num = num / 10;
  }

  printf("Sum of the digits of Given num = %d\n", Sum);//output

  return 0;
}