#include <stdio.h> //header file
#include <stdlib.h>//header file
#include <string.h>//header file 
int main() //Main function body starting
{ 
    FILE* fp = fopen("C:\\Users\\Lenovo\\Desktop\\program\\Ketan_96_C_Programs_Repository\\attendance.csv", "a+"); //opening file in append mode

    char name[50]; 
    int rollno, marks; 

    if (!fp) { 
        // Error in file opening 
        printf("Can't open file\n"); 
        return 0; 
    }

    //Taking input from the user for the new record to be added.   
    printf("\nEnter Student Name\n"); 
    scanf("%s", &name); 

    printf("\nEnter Roll Number\n"); 
    scanf("%d", &rollno); 

    printf("\nEnter Attendance\n"); 
    scanf("%d", &marks); 


    // Saving data in file 
    fprintf(fp, "%s, %d, %d\n", name, 
            rollno, marks); 

    printf("\nNew student deatils added."); 

    fclose(fp); 
    return 0; 

}