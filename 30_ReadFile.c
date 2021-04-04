//Program to read csv file.
#include <stdio.h> //Pre-Processor Directive to Include standard input output header files.
#include <stdlib.h>//Pre-Processor Directive to Include standard library header files.
#include <string.h>//re-Processor Directive to Include string header files. 

const char* getfield(char* line, int num)
{
    const char* tok;
    for (tok = strtok(line, ";");
            tok && *tok;
            tok = strtok(NULL, ";\n"))
    {
        if (!--num)
            return tok;
    }
    return NULL;
}
int main() //Main function body starting
{	
	//Path of the .csv file.
    FILE* stream = fopen("C:\\Users\\Lenovo\\Desktop\\program\\Ketan_96_C_Programs_Repository\\attendance.csv", "r"); 

    char line[1024];
    while (fgets(line, 1024, stream))
    {
        char* tmp = strdup(line);
        printf("Field 3 would be %s\n", getfield(tmp, 3));
        free(tmp);
    }
}