#include<iostream>
using namespace std;

void segragate(int arr[100], int start, int ending)
{
while(start<=ending)
{
    if(arr[start]>arr[start+1])
    {
        int temp=arr[start];
        arr[start]=arr[start+1];
        arr[start+1]=temp;
        start=-1;
    }
    start+=1;
}
}

void print(int arr[100], int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[100];
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        segragate(arr,0,n-1);
        print(arr,n);
    }
}
