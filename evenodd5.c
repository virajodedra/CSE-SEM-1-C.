#include<stdio.h>
  
     void main() {
     	int n,i=1,evensum=0,oddsum=0;
     	printf("Enter the number :");
     	scanf("%d",&n);
     	 
     	    while(i<=n){
     	    	if(i%2==0){
     	    		evensum = evensum-i;
				 }
				 else
				 {
				 	oddsum = oddsum + i;
				 }  i++;
				 
				 
			 }
			 
			 printf("%d",evensum+oddsum);
			 
	 }
