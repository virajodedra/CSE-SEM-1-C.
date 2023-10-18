#include<stdio.h>
  
    void main()
    {
    	int i,j,n,m;
    	
    	printf("Enter the size of row :");
    	scanf("%d",&n);
    	printf("Enter the size of column :");
    	scanf("%d",&m);
    	
    	int a[n][m];
    	
    	for(i=0;i<n;i++){
    		 
    		    for(j=0;j<n;j++){
    		    	
    		    	
    		    	  scanf("%d",&a[i][j]);
				}
				
				  
		}   
		for(i=0;i<n;i++){
    		 
    		    for(j=0;j<n;j++){
    		    	
    		    	
    		    	  printf(" %d",a[i][j]);
				}
				
				  printf("\n");
		
	}
}
