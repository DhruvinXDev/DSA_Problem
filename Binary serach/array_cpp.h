#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

class Binary_search
{
    vector<int> vect;
    int target;
    int n;
    public :
    void getdata()
    {
        int etc;
        cout<<"How many number you want to add : ";
        cin >> n;
        for(int i =0 ;i<n;i++)
        {
            cout<<i+1<<") ";
            cin>>etc;
            vect.push_back(etc);
        }
        sort(vect.begin(),vect.end());
        cout<<"Enter target : ";
        cin>>target;
    }
    int index( )
    {
        int start=0;
        int end=n-1;

        while(end>=start)
        {
        int mid=(start + end)/2;
        if(vect[mid]==target)
        {
            return mid;
        }
        else if(vect[mid]>target)
        {
            end = mid -1;
        }
        else
        {
            start = mid + 1;
        }
        }
        return -1;

    }
};