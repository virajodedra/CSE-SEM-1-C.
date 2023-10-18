#include<stdio.h>

   void main()
   {
   	  int n,i;
   	  printf("Enter the elements of array :");
   	  scanf("%d",&n);
   	  
   	      int a[n]; 
   	      for(i=0;i<n;i++){
   	     	
   	     	   printf("Enter the elements of a[%d] : ",i);
   	     	   scanf("%d",&a[i]);
			}
			
			int m,count=0;
			printf("enter the number that you want to find in array :");
			scanf("%d",&m);
			
			for(i=0;i<n;i++){
				
				if(a[i]==m){
					count++;
				}
				else{
					
				}
			}
			
			  if(count==1){
			  	printf("YES");
			  }
			  else
			  {
			  	printf("NO");
			  }
			   
   }
