#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=0,b=1,s=0;
    double r;
    for(int i=0;i<45;i++)
    {
        s=a+b;
        a=b;
        b=s;
        r=(b*1.0)/a;
    }

    cout<<"Value from series : "<<r<<endl;

    cout<<"Value from calculation : "<<(1+sqrt(5))/2.0<<endl;

    return 0;
}
