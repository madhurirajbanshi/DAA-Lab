#include<stdio.h>
int main()
{
	int temp,arr[]={2,1,3,20,5,8,9,10} ;
	int n=sizeof (arr)/sizeof (int) ;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1] ) {
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	printf("%d,",arr[i]) ;
}
