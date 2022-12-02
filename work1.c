#include <stdio.h>
int a[1005],b[1005];
int main()
{
    int n,i,j;
    a[0]=1,b[0]=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=0;j<100;j++)
        {
            a[j]*=i;
            if(a[j]>9)
            {
                a[j+1]+=a[j]/10;
                a[j]%=10;
            }
        } 
        for(j=0;j<100;j++)
        {
            b[j]+=a[j];
            if(b[j]>9)
            {
                b[j+1]+=b[j]/10;
                b[j]%=10;
            }
        }
    }
    for(j=100;b[j]==0&&j>=0;j--);
    for(;j>=0;j--)
    {
        printf("%d",b[j]);
    }
    return 0;
}