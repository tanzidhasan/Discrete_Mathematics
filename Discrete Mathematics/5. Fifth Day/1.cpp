#include<bits/stdc++.h>

using namespace std;

int A[1000];
int B[1000];
bool bA[10000];
bool bB[10000];
bool br[10000];

void uni()
{
    for(int i=1;i<=10000;i++)
    {
        if(bA[i] | bB[i])
            cout<<i<<" ";
    }
    cout<<endl;
}

void inter()
{
    for(int i=1;i<=10000;i++)
    {
        if(bA[i] & bB[i])
            cout<<i<<" ";
    }
    cout<<endl;
}

void complement()
{
    for(int i=1;i<=10000;i++)
    {
        if(bA[i] && !bB[i])
            cout<<i<<" ";
    }
    cout<<endl;
}

void Xor()
{
    for(int i=1;i<=10000;i++)
    {
        if(bA[i] ^ bB[i])
            cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter the elements number of set A : ";
    cin>>a;
    cout<<"Enter the element of set A : ";
    for(int i=1;i<=a;i++)
    {
        cin>>A[i];
        bA[A[i]]=true;
    }
    cout<<"\nEnter the elements number of set B : ";
    cin>>b;
    cout<<"Enter the element of set B : ";
    for(int i=1;i<=b;i++)
    {
        cin>>B[i];
        bB[B[i]]=true;
    }

    cout<<"\n(A U B) : ";
    uni();
    cout<<"\n(A Intersection B) : ";
    inter();
    cout<<"\n(A \\ B) : ";
    complement();
    cout<<"\n(A XOR B) : ";
    Xor();

    cout<<endl;
    return 0;
}




