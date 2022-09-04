#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    char s;
    cin>>x>>s>>y;
    if(s==43)
    {
        cout<<(x+y)<<endl;
    }
    else if(s==45)
    {
        cout<<x-y<<endl;
    }
    if(s==42)
    {
        cout<<x*y<<endl;
    }
    if(s==47)
    {
        cout<<x/y<<endl;
    }
    return 0;
}
