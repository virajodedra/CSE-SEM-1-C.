#include<stdio.h>
                                    //very very most imp program........
     void main(){
     	int flag=0,n,i;
     	
     	printf("Enter the number n :");
     	scanf("%d",&n);
     	
     	for(i=2;i<n;i++){
     		
     		  if(n%i==0){ 
     		  
     		  	flag=1;
     		  	break;
			   }
		 } 
		    if(flag==1){
		    	printf("The number is not prime.")
		 }
		 
		 	else{
		 		printf("The number is prime.");
			 }
		 
	 }
