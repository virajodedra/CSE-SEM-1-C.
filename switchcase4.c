#include<stdio.h>
  
    void main()
    {
    	int a,b,c,sum;
    	printf("Enter the number a :");
    	scanf("%d",&a);
    	printf("Enter the number b :");
    	scanf("%d",&b);
    	printf("Enter the number c :");
    	scanf("%d",&c); 
    	 
    	  sum = (a>b)?((a>c)?a:c):((b>c)?b:c);
    	  
    	  printf("larjest number is : %d",sum);
	}
