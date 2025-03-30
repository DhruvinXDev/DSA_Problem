#include<iostream>
using namespace std;

int main( )
{
    int arr[] = {0,1,2,3,4,5,6,9,6,4,2,3};
    int index= arr[0];
    int size =12;
    for(int i=1;i<size;i++)
    {
        if(arr[i] >arr[index])
        {
            index=i;
        }
    }
    cout<<"the peak value "<<arr[index]<<" at index : "<<index<<endl;
    return 0;
}