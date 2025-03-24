#include<iostream>
using namespace std;

int main ( )
{
    int n = 9;
    int arr[ ] = {-2,1,-3,4,-1,2,1,-5,4};
    int max_sum = arr[0];

    //time cmp is (n ^ 2)
    for(int start=0;start<n;start++)
    {
        int current_sum =0;
        for(int i=start;i<n;i++)
        {
            current_sum += arr[i];
            max_sum = max(current_sum,max_sum);
        }
    }

    cout<<"Max sum is = "<<max_sum;
    return 0;

}