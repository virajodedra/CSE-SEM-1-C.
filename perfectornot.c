#include<stdio.h>

   void main(){
   	int n,i=1,sum=0;
   	
   	  printf("Enter the number  :");
   	  scanf("%d",&n);
   	  
   	   while(i<n){
   	   	
   	   	if(n%i==0){
   	   	
			  sum = sum + i;	
   	   	        	
			  }
			       i++;
			   
			  }
			  
			  if(sum==n){
			  	printf("The number is perfect");
		  
		    }
			else {
		  	printf("The number is not perfect");
		  }
   }
