#include<stdio.h>
  
    void main()  {
    	
    	int n,i=1;
    	
    	printf("Enter the number n:");
    	scanf("%d",&n);
    	
    	while (i<=n){
    		
    		if(i%2!=0){
    			printf("%d\n",i);
			}
			i++;
		}
	}
