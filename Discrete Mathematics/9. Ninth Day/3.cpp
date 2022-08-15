#include <bits/stdc++.h>

using namespace std;

int arr[1000000];
int brr[1000000];

int main()
{
    int a=0,b=0,x=0,y=0,n;
    cout<<"How long sequence you want : ";
    cin>>n;

    for(int i=0;i<n;i++)
        arr[i]=rand();

    for(int i=0;i<n;i++)
        cout<<arr[i]<<ends;
    cout<<endl<<endl;

    for(int i=0;i<n;i++)
        brr[i]=1;

    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=a;j<i;j++)
        {
            if(arr[j]<arr[i])
                brr[i]=max(brr[i],brr[i]+1);
        }
        a=j;
    }

    int s=0,e;
    for(int i=0;i<n;i++)
    {
        if(s<brr[i])
        {
            s=brr[i];
            b=i-s+1;
            e=i;
        }
    }

    cout<<"Longest increasing subsequence : ";
    for(int i=b;i<e+1;i++)
        cout<<arr[i]<<ends;







    i=0,j=0,a=0,s=0,b=0,e=0;
    for(i=0;i<n;i++)
    {
        for(j=a;j<i;j++)
        {
            if(arr[j]>arr[i])
                brr[i]=max(brr[i],brr[i]+1);
        }
        a=j;
    }

    for(int i=0;i<n;i++)
    {
        if(s<brr[i])
        {
            s=brr[i];
            b=i-s+1;
            e=i;
        }
    }

    cout<<endl<<endl<<"Longest decreasing subsequence : ";
    for(int i=b;i<e+1;i++)
        cout<<arr[i]<<ends;

}
