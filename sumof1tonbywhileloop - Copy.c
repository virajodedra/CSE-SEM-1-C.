#include<stdio.h>
  
    void main() {
    int n,i=0,sum=0;
	printf("Enter the number n :");
	scanf("%d",&n);
	
	while(i<=n){
		
		sum=sum+i;
		
		
		i++;
	}
	printf("%d\n",sum);
	}
