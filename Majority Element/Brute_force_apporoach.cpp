#include<iostream>
using namespace std;

int main( )
{
    int arr[] = {1,2,2,3,1,1,1,1};
    int size = 8;
    int majority_element ;

    // brote force apporoach
    //time cmp ( n ^ 2)
    for(int i=0;i<size;i++)
    {
        int count =0;
        for(int j= i;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            if(count> (size/2))
            {
                majority_element = arr[i];
                break;
            }

        }
    }
    cout<<"Majority Element is : "<<majority_element<<endl;

    return 0;

}
