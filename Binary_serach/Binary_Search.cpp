#include<iostream>
using namespace std;

int main ( )
{
    int arr[ ] = { -12,2,34,56,78,89};
    int size = 6;
    int target = 89;

    //in binary search first sort the array in acending order
    //it's also call monotonic
    //2nd find mid

    int start=0;
    int end=size-1;
    //time cmp is log(n)
    while(end>=start)
    {
        // int mid=(start + end)/2;
        int mid= start + (end - start)/2;//optimazation for overflowing the int value
        if(arr[mid]==target)
        {
            cout << arr[mid]<<" find";
            break;
        }
        else if(arr[mid]>target)
        {
            end = mid -1;
        }
        else if(arr[mid]<target)
        {
            start = mid + 1;
        }
    }

    return 0;
}