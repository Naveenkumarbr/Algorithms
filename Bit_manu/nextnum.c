#include<stdio.h>



//Finding the next higher number
void printbin(unsigned num);
int main()
{
    unsigned num=156;
    
    unsigned mask=1;
    unsigned temp=0;
    int i;
    int cntzero=0;
    for(i=0;i<32;i++)
    {
        if((num & (mask<<i))>0)
        {
            temp=temp|(num & (mask<<i));
            if((num & (mask<<(i+1)))==0)
                break;
        }
        else
            cntzero++;
        
    }
    
   
    mask=3;
    mask<<=i;
    
    temp^=mask;
    
    mask=1;
    for(int k=0;k<=i;k++)
    {
        if(k<(i-cntzero) || k==i)
            temp|=mask<<k;
    }
    printbin(temp);
    puts("num");
    printbin(num);
    num^=temp;
    printbin(num);
    
    return 0;
}

void printbin(unsigned num)
{
    int mask=1;
    printf("The binary rep: ");
    for(int i=31;i>=0;i--)
        printf("%c",((num & (mask << i))>0)?'1':'0');
    printf("\n");
    
}