#include<stdio.h>


#define square(x) ((x)*(x))
inline int multiply(int x,int y);

int main()
{
    int res=multiply(5,5);
    printf("%d",res);
    
    
    printf("\nsquareof%d:%d",5,square(5));
    
    #if 1
    printf("Commmented here");
    printf("hello");
    #endif
}

int multiply(int x, int y)
{
    return x*y;
}