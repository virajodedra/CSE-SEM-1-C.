#include<stdio.h>

   void main()
   {
   	   int n,i,m;
   	   
   	     printf("Enter the size of an array :");
   	     scanf("%d",&n);
   	     
   	       int a[n],count=0;
   	        for(i=0;i<n;i++){
   	     	
   	     	printf("Enter the elements of a[%d] :",i);
   	     	scanf("%d",&a[i]);
			}
			
			 
			 	
   	     	     printf("Enter the you want  to find in array  :");
   	               scanf("%d",&m);
   	               
   	               
   	               for(i=0;i<n;i++){
   	     	        if(m==a[i]){
   	     	        	
   	     	        	printf("a[i] :%d",a[i]);
						}
		
   }
   
}
