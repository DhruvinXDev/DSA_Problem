#include<iostream>
using namespace std;

int main( )
{
    int arr[] ={1,4,32,45,6,4,2};
    int size = 7;
    int max_profit=0;
    int best_buy = arr[0];
    //time cmp (n)
    for(int i=1;i<size;i++)
    {
        if(arr[i]>best_buy)
        {
            max_profit =  max( max_profit,arr[i]-best_buy);
        }
        best_buy = min(best_buy,arr[i]);
    }
    cout<<"The max profit is  : "<<max_profit<<endl;
    return 0;
}