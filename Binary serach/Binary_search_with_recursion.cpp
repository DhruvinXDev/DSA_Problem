#include<iostream>
#include<vector>
using namespace std;

int binary_serarch(vector<int> vect ,int start,int end, int target)
{
    if(start<=end){
    int mid = start +(end - start)/2;

    if(vect.at(mid)>target)
    {
        end = mid -1;
        return binary_serarch(vect,start,end,target);
    }
    else if(vect.at(mid)<target)
    {
        start = mid + 1;
        return binary_serarch(vect,start,end,target);
    }
    else
    {
        return mid;
    }
    }
    return -1;
}

int main( )
{
    vector<int> vect = {-12,-2,0,2,12,34,56,98,100};
    int target = 11;
    int start=0;
    int end = vect.size( ) -1 ;
    //time cmp is 0(log(n))
    //space cmp is log(n)
    cout <<"target at index : "<<binary_serarch(vect,start,end,target)<<endl;
}