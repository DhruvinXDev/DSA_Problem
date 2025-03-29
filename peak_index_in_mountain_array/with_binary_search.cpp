#include<iostream>
using namespace std;

int main ()
{
    int arr[] = {0,1,2,3,4,5,6,9,6,4,2,3};
    int n = 12;
    int start= 1, end = n-2;
    while(start<=end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid-1]<=arr[mid] && arr[mid]>=arr[mid+1])
        {
            cout <<"the peak value "<<arr[mid]<<" at index : "<<mid<<endl;
            break;
        }
        else if(arr[mid-1]>arr[mid])
        {
            end = mid -1;
        }
        else
        start= mid+1;
        cout<<start<<" ,"<<end<<endl;
    }
    return 0;
}