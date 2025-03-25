#include<iostream>
#include<vector>
#include<algorithm> // for sort function
using namespace std;

int main ( )
{ 
    //time cmp = n(log(n)) + n
    vector<int> arr = { 1,1,2,2,2,3,4,1,1,1,1,1};
    int size = arr.size( );
    int majority_Element ;
    sort(arr.begin( ),arr.end( ));
    int count = 1;
    for(int i =0;i<size;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
        else
            count =1;
        if(count>(size/2))
        {
            majority_Element=arr[i];
            cout <<"Majority Element is : "<< majority_Element<<endl;
            break;
        }

    }
}