#include<stdio.h>
  
  int max(int,int);
  int min(int,int);
  void main()
  {
  	    int a,b;
  	    printf("Enter the first number :");
  	    scanf("%d",&a);
  	    printf("Enter the second number :");
  	    scanf("%d",&b);
  	    
  	    int res = max(a,b);  
  	    printf("the maximum number is :%d\n",res);
  	    int res1 = min(a,b);
  	    printf("the minimum number is :%d",res1);
  	    
  }
  
       int max(int a,int b){
       	
       	  if(a>b){
       	  	
       	  	 return a;
			 }
			 else{
			 	return b;
			 }
    
	   }
	   
	       int min(int a,int b){
	       	
	       	if(a<b){
	       		
	       		return a;
			   }
			   else
			   {
			   	return b;
			   }
		   }
