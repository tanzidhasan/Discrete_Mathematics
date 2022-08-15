#include <bits/stdc++.h>

using namespace std;

int arr[1000000];

int main()
{
    for(int i=2;i<1000000;i++)
        if(arr[0]==0)
        {
            for(int j=i*2;j<1000000;j+=i)
                arr[j]=1;
        }

    int a,b;
    cout<<"Enter a positive integer, n : ";
    cin>>a;
    b=(a*a)+1;
    if(arr[b]==0)
        cout<<endl<<"(n^2)+1="<<b<<" is a prime number."<<endl;
    else
        cout<<endl<<"(n^2)+1="<<b<<" is not a prime number."<<endl;

    return 0;
}

