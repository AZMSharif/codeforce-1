#include <bits\stdc++.h>
using namespace std;
int main()
{
    long long int A,B,C;
    cin>>A>>B>>C;
    if(A<B&&A<C)
    {
        cout<<A;
    }
    else if(B<A&&B<C)
    {
        cout<<B;
    }
    else if(C<A&&C<B)
    {
        cout<<C;
    }
    else if(A==B&&B==C)
    {
        cout<<A;
    }
    else if(A==B)
    {
        if(B<C)
        {
            cout<<B;
        }
        else if(C<B)
        {
            cout<<C;
        }
    }
    else if(B==C)
    {
        if(B<A)
        {
            cout<<B;
        }
        else if(A<B)
        {
            cout<<A;
        }
    }
    else if(A==C)
    {
        if(B<C)
        {
            cout<<B;
        }
        else if(C<B)
        {
            cout<<C;
        }
    }

    if(A>B&&A>C)
    {
        cout<<" "<<A<<endl;
    }
    else if(B>A&&B>C)
    {
        cout<<" "<<B<<endl;
    }
    else if(C>A&&C>B)
    {
        cout<<" "<<C<<endl;
    }
    else if(A==B&&B==C)
    {
        cout<<" "<<A<<endl;
    }
    else if(A==B)
    {
        if(B>C)
        {
            cout<<" "<<B<<endl;
        }
        else if(C>B)
        {
            cout<<" "<<C<<endl;
        }
    }
    else if(B==C)
    {
        if(B>A)
        {
            cout<<" "<<B<<endl;
        }
        else if(A>B)
        {
            cout<<" "<<A<<endl;
        }
    }
    else if(A==C)
    {
        if(B>C)
        {
            cout<<" "<<B<<endl;
        }
        else if(C>B)
        {
            cout<<" "<<C<<endl;
        }
    }

    return 0;
}
