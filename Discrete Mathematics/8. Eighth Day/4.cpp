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

    int a,b=0,f=0;
    cout<<"Enter a positive even integer : ";
    cin>>a;

    for(int i=2;i<a;i++)
    {
        if(arr[i]==0)
        {
            brr[b]=i;
            b++;
        }
    }

    for(int i=0;i<b/2;i++)
    {
        int c=0;
        while(c<b)
            if(brr[i]+brr[c++]==a)
            {
                f=1;
                break;
            }
    }

    if(f==0)
        cout<<endl<<"Sum of any prime is not equal to the integer."<<endl;
    else
    {
        cout<<endl<<"The prime pairs : "<<endl;
        for(int i=0;i<b/2;i++)
        {
            int c=0;
            while(c<b)
                  if(brr[i]+brr[c++]==a)
                       cout<<brr[i]<<ends<<brr[c-1]<<endl;
       }

       cout<<endl;
    }

    return 0;
}
