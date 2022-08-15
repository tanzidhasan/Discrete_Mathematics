#include <bits/stdc++.h>

using namespace std;

int gcd(int x,int y)
{
    if(x==0)
        return y;
    else
        return gcd(y%x,x);
}

int main()
{
    int a,b;
    cout<<"Enter two integer : ";
    cin>>a>>b;
    int ans=(a*b)/gcd(a,b);
    cout<<endl<<"The LCM of two integer : "<<ans<<endl;

    return 0;
}
