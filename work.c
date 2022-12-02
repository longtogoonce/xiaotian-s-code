#include <stdio.h>
#include <string.h>
char A[2005],B[2005];
int a[2005],b[2005],c[2005];
int main()
{
	int x,y,i,j,z;
	scanf("%s %s",A,B);
	x=strlen(A);
	y=strlen(B);
	for(i=0;i<x;i++)
	{
		a[i]=A[x-i-1]-'0';
	}
	for(i=0;i<y;i++)
	{
		b[i]=B[y-i-1]-'0';
	}
	for(i=0;i<x;i++)
	{
		for(j=0,z=i;j<y;j++,z++)
		{	
				c[z]+=(a[i]*b[j]);
				if(c[z]>9)
				{
					c[z+1]+=c[z]/10;
					c[z]%=10;
				}
		}	
	}
	j=x+y-1;
	while(c[j]==0&&j>=0)
		j--;
		if(j==-1)
		printf("0");
	for(;j>=0;j--)
	{
		printf("%d",c[j]);
	}
	return 0;
}