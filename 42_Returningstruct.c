//program to demonstrate function implementation which retuns a sstructure as an argument
#include <stdio.h>
struct student
{
    char name[50];
    int age;
};

// function prototype
struct student getdata();

int main()
{
    struct student s;
    s =  getdata(); // function returning a structure
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nAge: %d", s.age);
    return 0;
}

struct student getdata()
{   struct student s1;
     printf("Enter name: ");

    // read string input from the user until \n is entered
    // \n is discarded
    scanf("%[^\n]%*c", &s1.name);
    printf("Enter age: ");
    scanf("%d", &s1.age);
    return s1;
}