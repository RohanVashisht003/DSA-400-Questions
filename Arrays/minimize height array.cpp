#include<iostream>
using namespace std;

void minimise(int arr[100], int n){
if(n==1){
    return;
}
sort(arr,arr+n);

int ans=arr[n-1]-arr[0];

//corner elements
int small=arr[0]+k;
int big=arr[n-1]-k;

if(small>big){
    swap(small,big);
}

//traverse middle elements
for(int i=1; i<n-1; i++)
{
    int subtract=arr[i]-k;
    int add=arr[i]+k;

}
}
int main(){
int k;
cin>>k;
int n;
cin>>n;
int arr[100];
for(int i=0; i<n; i++)
{
    cin>>arr[i];
}
minimise(arr,n);
}
