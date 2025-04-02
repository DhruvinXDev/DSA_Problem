#include<iostream>
using namespace std;

int Set_Bit (int num , int p)
{
    int mask = 1 << p;
    return (num | (1<<p)) ;
}

int main( )
{
    int number , position;

    cout <<"Enter the number : ";
    cin >>number;
    cout <<"Enter the position Where you have to change : ";
    cin >> position;
    int Updated_number = Set_Bit(number, position);
    cout <<"The Upadated number is : "<<Updated_number<<endl;
    return 0;
}