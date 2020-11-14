#include<iostream>
using namespace std;

void cyclicallyRotate(int arr[100],int n)
{
    if(n==1)
    {
        return;
    }

    else
    {

    int first=arr[n-1];
    for(int i=n-1; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=first;
}
}

void print(int arr[100], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void input(int arr[100], int n)
{
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int t;
    cin>>t;
    int arr[100];
    while(t--)
    {
        int n;
        cin>>n;
        input(arr,n);
        cyclicallyRotate(arr,n);
        print(arr,n);
}
}
