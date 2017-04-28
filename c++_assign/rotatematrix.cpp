#include<iostream>
#include<string>
#include<algorithm>

#define N 4

using namespace std;

void rotate(int mat[][N]);
void print(int matrix[][N]);
int main()
{
    int matrix[N][N]={{1,2,3,10},{4,5,6,11},{7,8,9,12},{13,14,15,16}};
    //int matrix[N][N]={{1,2,3},{4,5,6},{7,8,9}};
    print(matrix);
    cout<<"After Rotating"<<endl;
    rotate(matrix);
    print(matrix);
    
    
}

void print(int matrix[][N])
{
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
    
}

void rotate(int mat[][N])
{
    int row,col;
   
    for(row=0;row<N/2;row++)
    {
        for(col=row;col<N-row-1;col++)
        {
           int temp=mat[row][col];
           mat[row][col]=mat[N-1-col][row];
           mat[N-1-col][row]=mat[N-1-row][N-1-col];
           mat[N-1-row][N-1-col]=mat[col][N-1-row];
           mat[col][N-1-row]=temp;

        }
        
        
    }
}


