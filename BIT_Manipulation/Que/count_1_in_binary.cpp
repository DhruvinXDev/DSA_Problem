#include<iostream>
using namespace std;

int conut_one_using_r(int n,int c)
{
    if(n == 0)
    {
        return c;
    }
    else{
        c++;
        return conut_one_using_r((n & (n -1)), c);
    }
}

int count_1(int n)
{
    int count=0;
    while(n)
    {
        count++;
        n = n & (n-1);
    }
    return count;
}

int main ( )
{
    int number , count =0 ;
    cout<<"Enter the number : ";
    cin >>number;
    cout <<"the one in number "<<number<<" is : "<<count_1(number)<<endl;
    count = conut_one_using_r(number,count);
    cout<<"Count using recerson : "<<count<<endl;
    return 0;
}