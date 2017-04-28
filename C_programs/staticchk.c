#include<stdio.h>

int foo1();
int foo2();
static int temp=5;

int chk=5;
/*int main()
{
    
    printf("%d\n",foo1());
    printf("%d\n",foo1());
    printf("%d\n",foo1());
    printf("%d\n",foo1());
    printf("%d\n",foo1());
    //printf("%d\n",foo2());
}
*/

int foo1()
{
    
    //static int temp=1;
    temp++;
    return temp;
}

int foo2()
{
    
    //temp++;
    return 0;
}