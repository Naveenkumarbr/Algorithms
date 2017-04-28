#include<iostream>
#include<vector>

using namespace std;

int mat[2][3]={{1,2,3}
              ,{4,5,6}};


void matrixtrav(int row, int col, int i, int j, vector<int>  pathval);

int main()
{
     vector<int> pathval;
    matrixtrav(2, 3, 0, 0,pathval);
}

void matrixtrav(int row, int col,int i, int j, vector<int> pathval)
{
   
   // int matrow,matcol;
     pathval.push_back(mat[i][j]);
    if(i==row-1 && j==col-1)
    {
        for(int k=0;k<pathval.size();k++)
            cout<<pathval[k]<<"  ";
        cout<<endl;
       
       // pathval.erase(pathval.begin(),pathval.end());
        return;
    }
    
    if(j<col-1) matrixtrav(row, col, i, j+1, pathval);
    if(i<row-1) matrixtrav(row, col, i+1, j, pathval);
    return;
   
    
}