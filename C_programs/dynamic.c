#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    
    
    char *ptr;
    int bytes;
    puts("Enter the amount of mem wanted for char: ");
    scanf("%d",&bytes);
    
    char name[]="naveen";
    
    int len=sizeof(name)/sizeof(*name);
    ptr=(char*)malloc(bytes);
    
   /* ptr[0]='h';
    ptr[1]='e';
    ptr[2]='\0';
    */
    
    
    printf("test:%s\n ",__DATE__);
    if(ptr==NULL)
        printf("Could not allocate memory");
    else
    {
        for(int i=0;i<len;i++)
        {
        ptr[i]=name[i];
        }
        printf("allocated space is from %p ",ptr);
        printf("%s",ptr);
    }
   free(ptr);
}
/*

int main ()
{
int bytes;
char * text; 
printf ("How many bytes you want to book");
scanf ("%d", & bytes);
text = (char *) malloc (bytes);

if (text) 
{
printf ("Reserved memory:% i bytes =% i =% i Kbytes Mbytes \n", bytes, bytes/1024, bytes / (1024 * 1024 )) ;
printf ("The block starts at:%p \n", text);

free (text);
} 
else 
printf ("Could not allocate memory \n") ;
} 

*/