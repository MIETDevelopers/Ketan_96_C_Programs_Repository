#include<stdio.h>
	long int factro(int n); // Prototyping of function
	int main() {
    	int n;
    	printf("Enter a positive integer: ");
    	scanf("%d",&n);
    	printf("Factorial of %d = %ld", n, factro(n));// Genrating factorial
    	return 0;
	}

	long int factro(int n) { // Function declaration
    	if (n>=1)
        	return n*factro(n-1);
    	else
        	return 1;
}