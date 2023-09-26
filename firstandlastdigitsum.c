#include<stdio.h>
  
     void main(){
     	int n,a,sum=0,rem;
     	  
     	    printf("Enter the number :");
     	    scanf("%d",&n);
     	    rem = n%10;
     	    while(n!=0){
     	    	a=n;
     	    	n = n/10;
			 }
			 printf("%d ",a);
			 printf("the sum of first and last digit  is :%d",a+rem);
	 }
