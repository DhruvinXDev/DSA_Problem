#include<iostream>
using namespace std;

int main ( )
{
    int arr[ ] = {34,37,47,49,58,65,66};//array is shorted
    int size = 7;
    int target = 100;
    int sum=0;
    
    //time cmp = (n)
    int i=0,j=size-1;
    while(i<j)
    {
        sum =  arr[i] + arr[j];
        if(sum < target)
        {
            i++;
        }
        if(sum > target)
        {
            j--;
        }
        if(sum = target)
        {
            cout << i<<" , "<<j;
            break;
        }
    }
    return 0;
}