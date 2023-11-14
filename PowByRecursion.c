#include<stdio.h>


    int pow(int n, int m);
    int  main(){
    	
    	int n,m;
    	
    	printf("Enter the number N :");
    	scanf("%d",&n);
    	
    	printf("Enter the  power of  the  number  :");
    	scanf("%d",&m);
    	
    	int sum = pow(n,m);
    	
    	printf("The power of given number  is : %d",sum);
	}
	
	     int pow(int n,int m){
	     	
	     	if(m==1){
	     		
	     		return n;
			 }
			 
			 else{
			 	
			 	return n*pow(n,m-1);
			 }
		 }
