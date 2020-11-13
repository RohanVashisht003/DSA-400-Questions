#include<iostream>
#include<algorithm>
using namespace std;

class Data{
    private:
    int arr[100];
    public:
    void input(int n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
    }

    void kSmallest(int n,int k)
    {
        sort(arr,arr+n);
        cout<<arr[k-1]<<" ";
    }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int k;
    cin>>k;
    Data d;
    d.input(n);
    d.kSmallest(n,k);
}
}
