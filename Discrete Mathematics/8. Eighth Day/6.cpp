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
    cout<<"Enter a positive integer : ";
    cin>>a;
    if(arr[a]==0)
    {
        cout<<endl<<a<<" is a prime number."<<endl;
        if(arr[a+2]==0)
            cout<<endl<<a<<" and "<<a+2<<" are twin prime number."<<endl;
        else
            cout<<endl<<a<<" and "<<a+2<<" are not twin prime number."<<endl;
    }
    else
        cout<<endl<<a<<" is not a prime number."<<endl;

    return 0;
}


