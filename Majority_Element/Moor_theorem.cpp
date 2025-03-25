#include<iostream>
#include<vector>
using namespace std;

int main ( )
{ 
    //time cmp = n(log(n)) + n
    vector<int> arr = { 1,1,2,2,2,3,4,1,1,1,1,1};
    int size = arr.size( );
    int majority_Element =0;
    int count = 0;
    for(int i =0;i<size;i++)
    {
        if(count==0)
            majority_Element = arr.at(i);
        if(ans=arr[i])
            count++;
        else
            count--;
    }
    cout<<"Majority Element is : "<<majority_Element<<endl;
    return 0;
}