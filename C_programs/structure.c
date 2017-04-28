#include<stdio.h>

struct point
{
    int x;
    int y;
}p1,p2;


int slope(struct point *p3)
{
    int temp=p3->x+p3->y;
    return temp;
}


int main()
{
    //struct point p1;
    p1.x=5;
    p1.y=6;
    p2.x=10;
    printf("%d  %d",p1.x,p1.y);
    printf("\n");
    printf("%d",p2.x);
    
    
    printf("\n");
    printf("%d",slope(&p1));
    
    
}