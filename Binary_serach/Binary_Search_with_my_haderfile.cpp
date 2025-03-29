#include<iostream>
#include "array_cpp.h"
using namespace std;
int main ( )
{
    Binary_search b;
    b.getdata();
    int ans = b.index();
    cout<<"value find on sorted vect on index : "<<ans<<endl;
    return 0;
}