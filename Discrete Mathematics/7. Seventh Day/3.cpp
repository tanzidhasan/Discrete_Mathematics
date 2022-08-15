#include <bits/stdc++.h>

using namespace std;

int arr[1000000];
int brr[1000000];

int main()
{
    int j=0;
    for(int i=2;i<1000000;i++)
        if(arr[0]==0)
        {
            for(int j=i*2;j<1000000;j+=i)
                arr[j]=1;
        }

    int a,b=0;
    cout<<"Enter a positive integer : ";
    cin>>a;

    for(int i=1;i<a;i++)
    {
        if(arr[i]==0)
        {
            brr[b]=i;
            b++;
        }
    }

    cout<<endl<<"The prime factorization of the integer : ";
    for(int i=1;i<b;i++)
        if(a%brr[i]==0)
            while(a%brr[i]==0)
            {
                a=a/brr[i];
                cout<<brr[i]<<ends;
            }

    cout<<endl;
    return 0;
}
