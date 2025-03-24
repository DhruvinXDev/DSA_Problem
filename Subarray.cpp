#include<iostream>
using namespace std;

int main ( )
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;

    // the total number of subarray is = n(n+1)/2
    // subarray is continuos part of array

    // print all subarray of array
    for (int start=0;start<n;start++)
    {
        for(int end=start;end<n;end++)
        {
            for(int i = start;i<=end;i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout <<endl;
    }
    return 0;
}