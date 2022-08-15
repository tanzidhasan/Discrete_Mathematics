#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n,o,p;
    cout<<"Enter the value of m and n for A(m*n) matrix : ";
    cin>>m>>n;
    int a[m][n];
    cout<<"Enter the elements of A matrix : "<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];

    cout<<"Enter the value of o and p for B(o*p) matrix (o must be equal to n) : ";
    cin>>o>>p;
    int b[o][p];
    cout<<"Enter the elements of B matrix : "<<endl;
    for(int i=0;i<o;i++)
        for(int j=0;j<p;j++)
        cin>>b[i][j];

    int c[m][p];
    int f;
    for(int i=0;i<m;i++)
    {
        int f=0;
        for(int j=0;j<p;j++)
        {
            int g=0;
            for(int k=0;k<n;k++)
                g=g+(a[i][k]*b[k][f]);
            f++;
            c[i][j]=g;
        }
    }

    cout<<endl<<"(A*B) matrix : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<p;j++)
            cout<<c[i][j]<<ends;
        cout<<endl;
    }

    cout<<endl;
    return 0;
}
