#include<iostream>
#include<vector>
using namespace std;
//brute force apporoach basically mean that to check all the possiable value 

int main( )
{
    vector<int> vect ={1 ,2 ,3,4};
    int size = vect.size();
    vector<int> ans(size,1);
    
    for(int i=1;i<size;i++)
    {
        ans[i] =  ans[i-1] * vect[i-1] ;
    }

    int suffix =1;

    for(int i=size-2;i>=0;i--)
    {
        suffix *= vect[i+1];
        ans[i] *= suffix;
    }

    for(auto i : ans)
    {
        cout << i<<" ";
    }
    return 0;
}