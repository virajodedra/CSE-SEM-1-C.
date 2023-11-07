#include<stdio.h>

     int fact(int );
     void main()
     {
     	   int x;
     	   printf("Enter the number :");
     	   scanf("%d",&x);
     	   
     	  int sum=fact(x); 
          printf("The factorial is :%d",sum);
     	     
	 }
	 
	      int fact(int x){
	      	 if(x==0){
	      	 	return 1;
			   }
			   else{
			   	
			   	return  x*fact(x-1);
			   }
	      	 
	      	 
		  }
