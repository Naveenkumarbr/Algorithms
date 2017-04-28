#include<stdio.h>
#include<stdlib.h>

void string_reverse1(char *string) 
{ 
    //Assign a start pointer
    char *startptr=string;
    int strlen=0;
    //Finding the length of string
    while(*string!='\0')
    {   
        strlen++;
        string++;
    }
    //Assign a end pointer
    char *endptr=startptr+strlen-1;
    //Swap the string using pointers
    while(startptr<endptr)
    {
        char temp=*startptr;
        *startptr=*endptr;
        *endptr=temp;
        startptr++;
        endptr--;
    }

} 
char *string_reverse2(const char *string) 
{ 
    int strlen=0;
    //Finding length of string
    while(*string!='\0')
    {   
        strlen++;
        string++;
    }
    
    char *strtemp;
    strtemp=(char*)malloc(strlen+1);
    int i=0;
    const char *endptr=string-1;
    //swap the string using length
    while(strlen!=0)
    {
        strtemp[i++]=*endptr--;
        strlen--;
    }
    //Assign last value to null
    strtemp[i]='\0';
   
     
    return strtemp;


} 

int main()
{
    char str[]="Hello World";
    string_reverse1(str);
    printf("%s\n",str);
    char *revstr=string_reverse2(str); 
    printf("%s\n",revstr);
    free(revstr);
    
}