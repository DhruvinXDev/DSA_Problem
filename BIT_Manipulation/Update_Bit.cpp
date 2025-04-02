#include<iostream>
using namespace std;

int Update_Bit(int num , int p , int val)
{
    int mask = ~(1<<p);
    int n = num & mask; // hear change clear the value at p position
    return ( n | (val<<p));
}

int main ( )
{
    int number , position , value ;
    cout <<"Enter the number : ";
    cin >> number;
    cout <<"Enter the position you want to change / update the bit : ";
    cin >> position ;
    cout <<"Enter the value you want to change : ";
    cin >> value;
    int Updated_Ans = Update_Bit(number, position , value);
    cout << "Your Updated ans is : "<<Updated_Ans<<endl;
    return 0;
}