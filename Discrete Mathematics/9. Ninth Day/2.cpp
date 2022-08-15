#include <bits/stdc++.h>

using namespace std;



long long ncr(long long n, long long r)
{
    if(r==0 || r==n)
        return 1;
    else
        return (ncr(n-1, r-1)+ncr(n-1, r));
}

int npr(int x,int y)
{
    if(y==1)
        return x;
    else if(y%2==0)
        return npr(x,y/2)*npr(x,y/2);
    else
        return x*npr(x,y-1);
}


int main()
{
    long long a,b,c;
    cout<<"Enter a positive integer (n) : ";
    cin>>a;
    cout<<"Enter a non negative integer not exceeding n (r) : ";
    cin>>b;
    cout<<endl<<"Number of r-Permutation : "<<npr(a,b)<<endl<<endl;
    cout<<"Number of r-Combination : "<<ncr(a+b-1,b)<<endl;

    return 0;
}
