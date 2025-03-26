#include<iostream>
using namespace std;

int main ( )
{
    int arr[ ] = {1,44,3,6,6,5,64,32};
    int size = 8;
    int max_water = 0;
    int lp=0,rp=size -1 ;

    while(rp > lp)
    {
        int w = rp - lp;
        int h = min(arr[rp],arr[lp]);
        max_water = max( max_water , w * h);
        arr[lp] > arr[rp] ? rp-- : lp++ ;
    }
    cout <<"Container with maximum water is : "<<max_water<<endl;
    return 0;
}