#include<stdio.h>
#include<string.h>


typedef struct employee{
    char name[50];
    int salary;
    
}emp;

struct bottle{
    char name[20];
};

typedef struct bottle bot;

int main()
{
    emp e1;
    strcpy(e1.name,"naveen");
    e1.salary=10000;
    
    bot b1;
    strcpy(b1.name,"kumar");
    
    printf("%s",e1.name);
    printf("%s",b1.name);
    
}