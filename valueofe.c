#include<stdio.h>
 
       void main()
     {
     	int n,fact=1,j;
		 float a=1.00;
		 
		 printf("Enter the number  :");
		 scanf("%d",&n);
     	   		
     		  for(j=1;j<=n;j++){
     		  	
     		  	fact = fact*j;
     		  	
     		  	a += 1.00/fact;
     		  	
     		  	
     		  	
			   }
			   printf("the value of e is :%f",a);
		 }
