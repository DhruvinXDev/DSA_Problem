#include<iostream>
using namespace std;
int is_power_of_2(int n)
{
    return (n && !(n & (n-1)));
}
int main ( )
{
    cout <<is_power_of_2(8)<<endl;
    cout<<is_power_of_2(5)<<endl;
    return 0;
}