#include<stdio.h>

int binary_search(int arr[],int t ,int n);
void sort_array(int arr[],int n);

int main( )
{
    int arr[50];
    int n ;
    int t,i ;
    printf("how many number you want to add : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter %d value :",i+1);
        scanf("%d",&arr[i]);
    }
    
    printf("Enter target : ");
    scanf("%d",&t);
    sort_array(arr,n);
    int ans= binary_search(arr,t,n);
    printf(" Value on sorted array at : %d index ",ans);

    return 0;
}

int binary_search(int arr[],int t,int n)
{
    int s=0,e= n -1;
    int mid;
    while(s<=e)
    {
        mid = (s + e)/2;
        if(arr[mid]==t)
        {
            return mid;
        }
        else if(arr[mid]>t)
        {
            e = mid -1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

void sort_array(int arr[],int n)
{
    int i,j,t;
    for( i=0;i<n;i++)
    {
        for( j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}