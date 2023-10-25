#include<stdio.h>

   int sum(int,int);
   void main()
   
  {
  	    int a,b;
  	 printf("Enter the first number :");
	 scanf("%d",&a);
	 printf("Enter the second number :");
	 scanf("%d",&b);   
	 
	 int res = sum(a,b);
	 
	 printf("the sum is :%d",res);
	 
  }
  
         int sum(int a,int b)
         {
         	int c = a+b;
         	
         	return a+b;
		 }
