#include<stdio.h>
  
      void maiun(){
      	int n,i=1,count=0;
      	
      	printf("Enter the number :");
      	scanf("%d",&n);
      	
      	while(i<n){
      		
			  if(n%2==0){
			  	 count = count+1;
			  }
		      else if(count==0){
			  	printf("the number is prime");
			  } 
			  else{
			  	printf("the number is not prime");
			  }
		  }
	  }
