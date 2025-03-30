#include<iostream>
using namespace std;

int main ( )
{
    int arr[ ] = {1,44,3,6,6,5,64,32};
    int size = 8;
    int max_water = 0;
    for(int i =0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {

            int hight=min(arr[i],arr[j]);
            int w = j - i ;
            max_water= max(max_water, hight*w);
        }
    }
    cout<<"Container with maximum water : "<<max_water<<endl;
    return 0;
}