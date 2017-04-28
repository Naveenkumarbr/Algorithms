#include<iostream>
#define M 4
#define N 3

using namespace std;

void print(int mat[][N]);
void setzero(int mat[][N]);
int main()
{
   int mat[M][N]={{8,2,1},
                {4,5,9},
                {7,8,9},
                {0,1,12}};
                
    print(mat);
    cout<<"The matrix with 0 is : "<<endl;
    setzero(mat);
    print(mat);
    
}



void print(int matrix[][N])
{
    for(int i=0;i<M;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

void setzero(int mat[][N])
{
    int cnt=-1;
    for(int i=0;i<M;i++)
    {
        bool flag=false;
        for(int j=0;j<N;j++)
        {
            if(cnt==j)
                break;
            if(mat[i][j]==0)
            {
               flag=true;
               cnt=j;
            }
            
        }
        if(flag==true)
        {
         for(int k=0;k<N;k++)
            mat[i][k]=0;
                
         for(int k=0;k<M;k++)
            mat[k][cnt]=0;
        flag=false;
        }
    }
}