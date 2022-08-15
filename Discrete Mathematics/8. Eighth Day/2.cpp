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
    cout<<"Enter a prime integer : ";
    cin>>a;
    b=pow(2,a)-1;
    if(arr[b]==0)
        cout<<endl<<a<<" is a Mersenne prime number."<<endl;
    else
        cout<<endl<<a<<" is not a Mersenne prime number."<<endl;

    return 0;
}

