#include<iostream>
using namespace std;

int main ( )
{
    int n = 9;
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int max_sum = arr[0];
    int c_sum =0;
    //time cmp is (n )
    for(int start=0;start<n;start++)
    {
        c_sum += arr[start];
        max_sum = max(max_sum,c_sum);
        if(c_sum<0)
        {
            c_sum=0;
        }
    }

    cout<<"Max sum is = "<<max_sum;
    return 0;

}