#include<stdio.h>

#include<string.h>


union record{
    int x;
    char name[50];
};


int main()
{
    union record obj;
    
    strcpy(obj.name,"naveen");
    obj.x=4;//naveen is erased with 4 and only 4 is in mem
    printf("%s",obj.name);
    printf("\n%d",obj.x);
}