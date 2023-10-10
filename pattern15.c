#include<stdio.h>
 
    void main(){
    	char ch;
    	ch = 'a'; 
    	int i,j,n=5;
    	
    	  for(i=1;i<=n;i++){
    	  	  for(j=1;j<=n-1;j++){
    	  	  	printf(" ");
				}
				
				for(j=1;j<=i;j++){
					
					 if(j%2==0){
					 	
					 		printf("%c",ch);
					 		ch++;
					 		
						 }
						 else{
						 	printf("%d",j);
						 	
						 }
						printf("\n");	 
					}
						
					
			
		  }
	}

	
