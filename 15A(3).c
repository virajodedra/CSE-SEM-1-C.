#include<stdio.h>

   void main()
   {
   	   int n,i;
   	   
   	     printf("Enter the size os an array :");
   	     scanf("%d",&n);
   	     
   	       int a[n],count=0;
   	        for(i=0;i<n;i++){
   	     	
   	     	printf("Enter the elements of a[%d] :",i);
   	     	scanf("%d",&a[i]);
			}
			
			 for(i=0;i<n;i++){
   	     	      if(a[i]%3==0){
   	     	      	
   	     	      	count++;
					  }
			}
			
			
			printf("the count is : %d",count);
		
   }
