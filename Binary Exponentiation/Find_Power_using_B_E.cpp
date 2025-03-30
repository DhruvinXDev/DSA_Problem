#include<iostream>
using namespace std;

int main ( )
{
    int n,p;
    cout<<"Enter value of n , n is (n^p) : ";
    cin >>n;
    cout<<"Enter value of p , p is (n^p) : ";
    cin>>p;
    //case 
    if(n==1) return 1;
    if(n==0) return 0;
    if(p==0) return 1;
    if(p==1) return n;
    if(n==-1 && p%2==0) return 1;
    if(n== -1 && p%2 != 0) return -1;

    long BinForm = p;
    double ans=1;
    while(BinForm>0)
    {
        if(BinForm%2==1)
        {
            ans *= n;
        }
        n *= n;
        BinForm /=2;
    }
    cout<<"Ans : "<<ans;
    return 0;
}