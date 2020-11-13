#include<iostream>
using namespace std;

class Pair{
private:
    int a[100],minn,maxx,i;
public:
    void input(int n)
    {
        cout<<"Enter numbers";
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
    }

    void maximum(int n)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]>maxx)
            {
                maxx=a[i];
            }
            else{
                continue;
            }
        }
    }

    void minnimum(int n)
    {
        for(i=0; i<n; i++)
        {

            if(a[i]<minn)
            {
                minn=a[i];
            }
            else{
                continue;
            }
        }
    }
    void print(int n)
    {
        cout<<"Array is"<<endl;
        for(i=0; i<n; i++)
        {
            cout<<a[i]<<endl;
        }
        cout<<"Maximum no. is"<<maxx;
        cout<<"Minnimum no. is"<<minn;
    }
};

int main()
{
    int n;
    cin>>n;
    Pair p;
    p.input(n);
    p.maximum(n);
    p.minnimum(n);
    p.print(n);

}
