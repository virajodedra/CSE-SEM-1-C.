#include<stdio.h>
  
    void main()
    {
    	int i,j,n,m;
    	
    	printf("Enter the size of row :");
    	scanf("%d",&n);
    	printf("Enter the size of column :");
    	scanf("%d",&m);
    	
    	int a[i][j],b[i][j],c[i][j];
    	
    	for(i=0;i<n;i++){
    		 
    		    for(j=0;j<n;j++){
    		    	
    		    	  printf("Enter the elements of a[%d][%d] : ",i,j);
    		    	  scanf("%d",&a[i][j]);
				}
}
        printf("\n");

               for(i=0;i<n;i++){
    		 
    		    for(j=0;j<n;j++){
    		    	
    		    	  printf("Enter the elements of b[%d][%d] : ",i,j);
    		    	  scanf("%d",&b[i][j]);
		   }   
	}
	                      
	        for(i=0;i<n;i++){
    		 
    		       for(j=0;j<n;j++){
    		       	c[i][j] = a[i][j]+b[i][j];
    		       	
    		       	   printf("c[%d][%d] :%d\t",i,j,c[i][j]);
				   }
				  printf("\n");
			} 
			
			
		}
				   
				   
				   

