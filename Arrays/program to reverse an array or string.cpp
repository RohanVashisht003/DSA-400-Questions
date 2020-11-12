#include<iostream>
using namespace std;

void reverseArray(int a[],int start_index, int end_index)
{
while(start_index < end_index)
{
    int temp=a[start_index];
    a[start_index]=a[end_index];
    a[end_index]=temp;
    start_index+=1;
     end_index-=1;
}
}

void printArray(int a[],int end_index)
{
    for(int i=0; i<end_index; i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    reverseArray(arr,0,n-1);


    //after reversing array
    printArray(arr,n);
}
