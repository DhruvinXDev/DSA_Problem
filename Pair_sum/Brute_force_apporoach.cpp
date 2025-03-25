#include<iostream>
using namespace std;
//brute force apporoach basically mean that to check all the possiable value for diffrent pair

int main( )
{
    int arr[] ={ 32,13,43,24,64,68};
    int size=6;
    int target = 100;
    int c_sum=0;
    int index[2];

    //time cmp = (n ^ 2)
    for(int start =0;start <size;start++)
    {
        for(int end = start;end<size;end++)
        {
            c_sum += arr[end] + arr[start];
            if(c_sum ==target)
            {
                cout<<start<<" , "<<end<<endl;
                index[0]=start;
                index[1]=end;
            }
            c_sum = 0;
        }
    }
    return 0;


}