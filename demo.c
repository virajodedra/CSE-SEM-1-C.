#include<stdio.h>
void main()
{
	int i,j,k,a=1,n=5;
	char ch;
	ch='a';
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		
		for(k=1;k<=i;k++)
		{
			
			if(j%2==1)
			
			{
			   if(k%2==0){
			   
				printf("%c ",ch);
				ch++;
			}
			else
			{
			
				printf("%d ",a);
				a++;	
			}
			 
		}
			
		}
		printf("\n");
	}
}
