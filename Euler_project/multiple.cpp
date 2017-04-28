#include <iostream>
using namespace std;

int main()
{
    int count5=0,count3=0;
    int sum5=0,sum3=0;
    while(count5<(1000-5))
    {
        count5=count5+5;
        if(count5%3!=0)
        sum5+=count5;
    }
    count5=count5-5;
    while(count3<(1000-3))
    {
        count3=count3+3;
        sum3+=count3;
    }
   // count3=count3-3;
    cout<<"sum of these values "<<sum5+sum3;
    return 0;
}
