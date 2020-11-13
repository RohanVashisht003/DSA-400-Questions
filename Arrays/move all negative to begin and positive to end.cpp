#include<iostream>
using namespace std;

void moveToLeft(int arr[100], int n){
     int j=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<0)
        {
            if(i!=j)
            {
                swap(arr[i],arr[j]);
            }
            j++;
        }
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
int arr[100];
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
moveToLeft(arr,n);
print(arr,n);

}
