#include <bits/stdc++.h>

using namespace std;

long long fact(long long n)
{
    if(n==1)
        return 1;
    else
        return (n*fact(n-1));
}

long long ncr(long long n, long long r)
{
    if(r==0 || r==n)
        return 1;
    else
        return (ncr(n-1, r-1)+ncr(n-1, r));
}



int main()
{
    long long a,b,c;
    cout<<"Enter a positive integer (n) : ";
    cin>>a;
    cout<<"Enter a non negative integer not exceeding n (r) : ";
    cin>>b;
    c=ncr(a, b);
    cout<<endl<<"Number of r-Permutation : "<<c*fact(b)<<endl<<endl;
    cout<<"Number of r-Combination : "<<c<<endl;

    return 0;
}
