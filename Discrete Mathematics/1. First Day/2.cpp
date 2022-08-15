#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int c,d;
    cout<<"Enter first string  : ";
    cin>>a;
    cout<<"Enter second string : ";
    cin>>b;
    cout<<"---------------------------------------"<<endl<<"(AND)               : ";
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='0')
            c=0;
        else
            c=1;
        if(b[i]=='0')
            d=0;
        else
            d=1;
        printf("%d",c&d);
    }

    cout<<endl<<"(OR)                : ";

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='0')
            c=0;
        else
            c=1;
        if(b[i]=='0')
            d=0;
        else
            d=1;
        printf("%d",c|d);
    }

    cout<<endl<<"(XOR)               : ";

    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='0')
            c=0;
        else
            c=1;
        if(b[i]=='0')
            d=0;
        else
            d=1;
        printf("%d",c^d);
    }
    return 0;
}
