#include<iostream>
using namespace std;

int GetBit(int num  , int position)
{
    return (num & (1<< position) ) != 0;
}

int main( )
{
    int number, position;
    cout << "Enter the number : ";
    cin >>number;
    cout << "Enter the position : ";
    cin >> position;
    int ans= GetBit(number,position );
    cout<<"The bit at position "<<position<<" is : "<<ans<<endl;
    return 0;
}