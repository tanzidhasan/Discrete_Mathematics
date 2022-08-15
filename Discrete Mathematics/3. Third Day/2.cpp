#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    double a,r,sum;
    cout<<"Enter the first item of the series : ";
    cin>>a;
    cout<<"Enter the general ratio of the series : ";
    cin>>r;
    sum=a/(1-r);
    cout<<"Answer : "<<sum<<endl;
    return 0;
}
