#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,p,q;
    cin>>x;
    y=x/365;
    cout<<y<<" years"<<endl;
    p=x%365;

    cout<<p/30<<" months"<<endl;
    q=p%30;
    cout<<q<<" days"<<endl;
    return 0;
}
