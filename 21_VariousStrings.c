//A C Program for passing string to a Function. 			© Ishav Verma 19/March/2021
#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter String: \n");
    fgets(str, sizeof(str), stdin);  //This will read the user input.           
    displayString(str);     // Passing string to a function.    
    return 0;
}
void displayString(char str[])
{
	
    printf("String Output: ");
    puts(str);
}