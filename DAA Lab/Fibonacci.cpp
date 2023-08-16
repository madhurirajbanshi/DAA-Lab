#include<stdio.h>
int fibo(int num)  {
	if(num==0) {
		return 0;
	}
		else if(num==1){
		  
			return 1;}
			
			else {
			
				return fibo(num-1)+fibo(num-2);
			
		}
		
	}
		int main()
		{
		
		
		
			int a,k;
			printf("Enter a number:\n");
			scanf("%d",&a)  ;
			k=	fibo(a);
			
			printf ("The required fibonacci series is %d:\n",k );
			
		
		  }
		
	

	

