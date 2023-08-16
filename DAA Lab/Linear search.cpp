#include<stdio.h>
int main()
{
	int key,arr[]={1,2,3,4,5,6,7};
	int n=sizeof (arr)/sizeof (arr[0]);
	printf("enter a number:\n");
	scanf("%d",&key);
	for(int i=0;i<n;i++)
	{
		if (arr[i]=key) {
			printf("Key found %d\n",i);
			return 0;
			}
			
		}
			printf("key not found %d\n") ;
			return -1;
			
			
			
		}
	


