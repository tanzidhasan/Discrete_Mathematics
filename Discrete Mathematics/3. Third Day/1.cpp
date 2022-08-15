#include <bits/stdc++.h>
#include <math.h>

using namespace std;

void no1()
{
    int a,d,L,U,sum=0;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter d : ";
    cin>>d;
    cout<<"Enter L : ";
    cin>>L;
    cout<<"Enter U : ";
    cin>>U;
    sum=((U-L+1)*a)+(d*((U*(U+1)-L*(L-1))/2));
    cout<<endl<<"Answer : "<<sum<<endl;
}

void no2()
{
    int a,b,c,r,L,U,sum;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter r : ";
    cin>>r;
    cout<<"Enter L : ";
    cin>>L;
    cout<<"Enter U : ";
    cin>>U;
    b=(U-L)+1;
    if(r==1)
        sum=a*b;
    else
    {
        c=pow(r,b);
        sum=((a*(pow(r,L))*(c-1))/(r-1));
    }

    cout<<endl<<"Answer : "<<sum<<endl;
}

void no3()
{
    int L,U,sum=0;
    cout<<"Enter L : ";
    cin>>L;
    cout<<"Enter U : ";
    cin>>U;
    sum=((U-L)+1)*(U*(U+1)-L*(L-1));
    cout<<endl<<"Answer : "<<sum<<endl;
}

int main()
{
    int n;
    for(;;)
    {
        cout<<"1. a+nd"<<endl<<"2. ar^j"<<endl<<"3. i+j"<<endl<<"4. Exit"<<endl<<"   Enter the option : ";
        cin>>n;
        if(n>4)
            cout<<"Invalid input."<<endl<<endl;
        if(n==4)
            break;
        switch(n)
        {
        case 1 :
                {
                    cout<<endl<<"1. a+nd : "<<endl;
                    no1();
                    cout<<endl<<endl;
                }break;
        case 2 :
                {
                    cout<<endl<<"2. ar^j : "<<endl;
                    no2();
                    cout<<endl<<endl;
                }break;
        case 3 :
                {
                    cout<<endl<<"3. i+j : "<<endl;
                    no3();
                    cout<<endl<<endl;
                }break;
        }
    }
}
