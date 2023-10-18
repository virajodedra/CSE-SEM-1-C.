#include<stdio.h>
  
    void main()
    {
    	int i,j,n,m;
    	
    	printf("Enter the size of row :");
    	scanf("%d",&n);
    	printf("Enter the size of column :");
    	scanf("%d",&m);
    	
    	int a[n][m],pos=0,neg=0,zero=0;
    	
    	for(i=0;i<n;i++){
    		 
    		    for(j=0;j<n;j++){
    		    	
    		    	  printf("Enter the elements of a[%d][%d] : ",i,j);
    		    	  scanf("%d",&a[i][j]);
				}
				

		}
    	
    	for(i=0;i<n;i++){
    		 
    		    for(j=0;j<n;j++){
    		    	  if(a[i][j]>0){
    		    	  	pos++;
					  }
					 else if(a[i][j]<0){
					 	neg++;
					 } 
					 else {
					 	zero++;
					 }
    		    	  
			}
		
		}
		
		       printf("the count of positive is : %d\n",pos);
		       printf("the count of negative is : %d\n",neg);
		       printf("the count of zero is : %d",zero);
	}
