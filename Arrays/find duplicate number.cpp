#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int n;
cin>>n;
int arr[100];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0; i<n; i++){
    int number=arr[i];
    for(int j=i+1; j<n; j++){
        if(arr[i]==arr[j]){
            cout<<arr[i];
            return 0;
        }
    }
}
}
