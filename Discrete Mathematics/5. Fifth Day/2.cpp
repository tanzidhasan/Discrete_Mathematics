#include<bits/stdc++.h>

using namespace std;

int main()
{
    double sum=0;
    for(int i=0;i<20;i++)
    {
        sum=sum+((6.0/sqrt(3))*(1/(((2*i)+1)*pow((-3),i))));
        cout<<i<<ends<<ends<<sum<<endl;
    }
}
