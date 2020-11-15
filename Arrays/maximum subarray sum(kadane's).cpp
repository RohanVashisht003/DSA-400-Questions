#include<iostream>
using namespace std;

void maximumSubarray(int arr[100],int n)
{
int csum=arr[0];
int osum=arr[0];

for(int i=1; i<n; i++)
{
    if(csum>=0)
    {
        csum+=arr[i];
    }
    else{
        csum=arr[i];
        csum;
    }
    if(csum>osum){
        osum=csum;
    }
}

cout<<"Maximum subarraysum= "<<osum;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    maximumSubarray(arr,n);
}
