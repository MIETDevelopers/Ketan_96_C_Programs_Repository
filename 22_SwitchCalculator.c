#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); 
    scanf("%c", &operator); //get Operator 
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b); //Get a and b
    switch(operator) //Switch case
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Add 
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtract 
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication 
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division 
            break;
    printf("Invalid operator");  //If choice is not valid
    }
    return 0;
}