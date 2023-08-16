#include<stdio.h>
int main()
{
	int m,n,r;
	printf("enter Two numbers:\n");
	scanf("%d%d",&m,&n);
	while(m && n !=0)
	{
		r=m%n;
		m=n;
		n=r;
	}
	printf("GCD=%d",m)  ;
}
