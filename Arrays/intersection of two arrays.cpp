#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    int arr[100],arr2[100];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<m; i++)
    {
            cin>>arr2[i];
    }
        sort(arr,arr+n);
        sort(arr2,arr2+m);

    int counter=0;
    for(int i=0; i<n;)
    {
        for(int j=0; j<m;)
        {
            if(arr[i]==arr2[j])
            {
                i++;
                j++;
                counter++;
            }

            else if(arr[i]>arr2[j])
            {
                j++;
            }
            else{
                i++;
            }
        }
    }
    cout<<counter;
}
}
