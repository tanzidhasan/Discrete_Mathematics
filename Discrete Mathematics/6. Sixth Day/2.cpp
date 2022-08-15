#include <bits/stdc++.h>

using namespace std;

int a[100][100];
int b[100][100];
int c[100];

void cross(int m)
{
    for(int i=0;i<m;i++)
    {
        int f=0;
        for(int j=0;j<m;j++)
        {
            int g=0;
            for(int k=0;k<m;k++)
                g=g+(a[i][k]*b[k][f]);
            f++;
            c[j]=g;
        }
        for(int l=0;l<m;l++)
            a[i][l]=c[l];
    }
}

int main()
{
    int m,n;
    cout<<"Enter the value of m for A(m*m) matrix : ";
    cin>>m;
    cout<<"Enter the elements of A matrix : "<<endl;
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];

    cout<<"Enter the power of A(m*m) matrix : ";
    cin>>n;

    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            b[i][j]=a[i][j];

    for(int l=1;l<n;l++)
    {
        cross(m);
    }

    cout<<endl<<"(A^"<<n<<") matrix : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<ends;
        cout<<endl;
    }

    return 0;
}
