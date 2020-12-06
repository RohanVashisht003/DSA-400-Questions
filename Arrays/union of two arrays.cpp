#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    int arr[100];
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int k=0;
        set<int>set1;
        for(int i=0; i<n; i++)
        {
            cin>>k;
            set1.insert(k);
        }

        for(int i=0; i<m; i++)
        {
            cin>>k;
            set1.insert(k);
        }
        cout<<set1.size()<<endl;
    }
}
