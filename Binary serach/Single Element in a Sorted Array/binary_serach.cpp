#include<iostream>
using namespace std;

int single_element(int arr[],int size)
{
    int start =1,end = size -2;
    if(size == 1) return arr[0];
    if(arr[start]!= arr[start-1]) return arr[start -1];
    if(arr[end+1] != arr[end]) return arr[end +1];

    while(start <=end)
    {
        int mid = start + (end - start )/2;
        if(arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]) return arr[mid];
        else if(arr[mid-1] != arr[mid])
                if(mid%2 == 0)
                    start = mid + 1;
                else
                    end = mid -1;
        else
            if(mid%2 == 0)
                end = mid -1;
            else
                start = mid +1;
    }
    return -1;
}

int main ( )
{
    int arr[] = {1,1,4,4,5,6,6,7,7,10,10};//array are sorted and 
    int size = 11;
    int ans = single_element(arr,size);
    cout<<"The single element is : "<<ans<<endl;
    return 0;
}