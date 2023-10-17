#include<stdio.h>

    int main()
   {
   	    int n,i,j;
   	    
   	      printf("Enter the   size of an array : ");
   	      scanf("%d",&n);
   	         int a[n],b[n];
   	        for(i=0;i<n;i++){
   	     	
   	     	printf("Enter the elements of arr[%d] :",i);
   	     	scanf("%d",&a[i]);
			}
			
			  
   	     	
   	     	    for(j=0;j<n;j++){
   	     	    	
   	     	    b[i] = a[i];
   	     	    
					}
   	     	 for(i=0;i<n;i++){
				 
   	     	printf(" b[%d] is :%d\n",i,a[i]);
		}
   }
