#include<iostream>
using namespace std;

int main ()
{
    int arr[ ] = {3,4,5,6,7,0,1,2};
    int size = 8;

    int start = 0, end = size -1;

    int target =7;
    while(start<=end)
    {
        int mid= start + (end - start)/2;
        if(arr[mid]==target)
        {
            cout<<"Index : "<<end;
            break;
        }
        else if(arr[start]<= arr[mid])
        {
            if(arr[start] <= target && target <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid+1;
            }
        }
        else
        {
            if(arr[mid] <= target &&  target <= arr[end] )
            {
                start = mid + 1;
            }
            else
            end = mid -1;
        }
    }
}