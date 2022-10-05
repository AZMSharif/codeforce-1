#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x;
    double a,p;
    cin>>a;
    x=a;
    p=a-x;
    if(p==0)
    {
        cout<<"int "<<x<<endl;
    }
    else {
        cout<<"float "<<x<<" "<<p<<endl;
    }
    return 0;
}
