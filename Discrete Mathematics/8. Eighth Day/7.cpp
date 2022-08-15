#include <bits/stdc++.h>

using namespace std;

int divid(int x, int y)
{
    if(y==1)
        return x;
    if(y%2==0)
        return divid(x,y/2)*divid(x,y/2);
    if(y%2!=0)
        return x*divid(x,y-1);
}

int main()
{
    int a,b,d,m;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter m : ";
    cin>>m;

    d=divid(a,b);
    cout<<endl<<"Answer : "<<d%m<<endl;

    return 0;
}
