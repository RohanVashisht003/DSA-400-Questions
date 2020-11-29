#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>k>>n;
        int a[n];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int mx=a[n-1];
        int mi=a[0];
        int mid=(a[0]+a[n-1])/2;

        for(int i=0; i<n; i++)
        {
            if(a[i]<=mid){
                a[i]+=k;
            }
            else{
                a[i]-=k;
            }
        }
        sort(a,a+n);
        cout<<min(mx-mi,a[n-1]-a[0])<<endl;

    }

}
