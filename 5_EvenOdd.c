#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number); //get no.
    if(number % 2 == 0)// Odd Even logic
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
    return 0;
}