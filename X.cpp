#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a<c&&b<c||a>c&&b>c&&a>d)
    {
        cout<<"-1"<<endl;
    }
    else if(a<=c&&b>=c)
    {
        if(b<=d)
        {
            cout<<c<<" "<<b<<endl;
        }
        else
        {
            cout<<c<<" "<<d<<endl;
        }
    }
    else if(a>c&&b>c)
    {
        if(b<=d)
        {
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<a<<" "<<d<<endl;
        }
    }


    else if(a==b&&b==c&&c==d)
    {
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
