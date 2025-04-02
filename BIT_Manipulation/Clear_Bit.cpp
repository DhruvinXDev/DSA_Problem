#include<iostream>
using namespace std;

int Clear_Bit(int num , int p)
{
    int mask = ~(1<<p);
    return num & mask;
}

int main( )
{
    int number,position;
    cout <<"Enter the number : ";
    cin >>number;
    cout<<"Enter the position Where you want to remove the BIT : ";
    cin >>position;
    int Updated_number= Clear_Bit(number, position);
    cout <<"The Updated number is : "<<Updated_number<<endl;
    return 0;
}