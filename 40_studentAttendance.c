#include <stdio.h> //Including standard input output header files.
#include <stdlib.h>//Including standard library header files.
#include <string.h>//Including string header files. 
int main() 
{ 
    FILE* fp = fopen("C:\\Users\\Lenovo\\Desktop\\program\\Ketan_96_C_Programs_Repository\\attendance.csv", "a+"); //File path.

    char name[50]; 
    int rollno, attendance; 

    if (!fp) { 
        // if fp is empty 
        printf("Can't open file\n"); 
        return 0; 
    }
    // Asking user input for the new record to be added.   
    printf("\nEnter Student Name\n"); 
    scanf("%s", &name); 
    printf("\nEnter Roll Number\n"); 
    scanf("%d", &rollno); 
    printf("\nEnter Attendance\n"); 
    scanf("%d", &attendance); 

    // Saving data in file 
    fprintf(fp, "%s, %d, %d\n", name, 
            rollno, attendance); 

    printf("\nNew student details added."); 

    fclose(fp); 
    return 0; 
}