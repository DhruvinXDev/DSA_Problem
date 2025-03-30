#include<iostream>
#include<vector>
using namespace std;
//brute force apporoach basically mean that to check all the possiable value 

int main( )
{
    vector<int> vect ={1 ,2 ,3,4};
    int size = vect.size();
    vector<int> ans(size,1);
    int product=1;
    for(int i =0 ;i<size;i++)
    {
        product =1;
        for(int j=0;j<size;j++)
        {
            if(i!=j)
            {
                product *= vect[j];
            }
        }
        ans[i]=product;
    }

    for(auto i : ans)
    {
        cout << i<<" ";
    }
    return 0;
}