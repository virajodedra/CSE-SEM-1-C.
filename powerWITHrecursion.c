#include<stdio.h>

     int count(int,int);
     
    void main()
    {
    	 int a,b;
    	 
    	 printf("Enter the A : ");
    	 scanf("%d",&a);
    	 printf("Enter the power of  A :");
    	 scanf("%d",&b);
    	 
    	 
    	 int sum =count(a,b);
    	 printf("The Power is : %d",sum);
	}
	
	   int count(int a,int b){
	   	  
			 if(b==1){
			 	
			 	return a;
			 }
			    
			    else{
			    	   
			    	   return a*pow(a,b-1); 
				}
	   }
