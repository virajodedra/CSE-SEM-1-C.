#include<stdio.h>

   void main(){
   	int i,j,n=5;
   	
   	for(i=1;i<=n;i++){
   		 
   		 for(j=1;j<=i;j++){
   		 	printf("*");
			}
			
			
			for (j=1; j<11-2*i; j++) {
				printf(" ");
			}
			for (j=1; j<=i; j++) {
				printf("*");
			}
			printf("\n");
	   }
	   for (i=1;i<=n;i++){
	   	
	   	      for(j=1;j<=6-i;j++){
	   	      	
	   	      	printf("*");
				 }
				  
				  for(j=1;j<=2*(i-1);j++){
				  	printf(" ");
				  }
				  
				  for(j=1;j<=5-i;j++){
				  	
				  	printf("*");
				  }
	   	printf("*");
	   	
	   	printf("\n");
	   }
   
      
           
   }
