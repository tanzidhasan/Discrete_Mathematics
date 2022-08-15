#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[4]={1,1,0,0},b[4]={1,0,1,0};
    int na[4],nb[4],con[4],dis[4],eor[4],cds[4],bcs[4];
    for(int i=0;i<4;i++)
    {
        if(a[i]==0)
            na[i]=1;
        else
            na[i]=0;
        if(b[i]==0)
            nb[i]=1;
        else
            nb[i]=0;
        con[i]=(a[i]&b[i]);
        dis[i]=(a[i]|b[i]);
        eor[i]=(a[i]^b[i]);
        if(a[i]==1)
        {
            if(b[i]==1)
                cds[i]=1;
            else
                cds[i]=0;
        }
        else
            cds[i]=1;

        if(eor[i]==0)
            bcs[i]=1;
        else
            bcs[i]=0;
    }

    printf("p\tq\t~p\t~q\tp^q\tpvq\tpEORq\tp->q\tp<->q\n----------------------------------------------------------------------\n");
    for(int i=0;i<4;i++)
    {
        (a[i]==0)?cout<<"F\t":cout<<"T\t";
        (b[i]==0)?cout<<"F\t":cout<<"T\t";
        (na[i]==0)?cout<<"F\t":cout<<"T\t";
        (nb[i]==0)?cout<<"F\t":cout<<"T\t";
        (con[i]==0)?cout<<"F\t":cout<<"T\t";
        (dis[i]==0)?cout<<"F\t":cout<<"T\t";
        (eor[i]==0)?cout<<"F\t":cout<<"T\t";
        (cds[i]==0)?cout<<"F\t":cout<<"T\t";
        (bcs[i]==0)?cout<<"F\t":cout<<"T\t";
        cout<<endl;
    }

}
