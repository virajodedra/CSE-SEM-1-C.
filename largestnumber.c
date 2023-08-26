#include<stdio.h> 
   
      int main () {
      	int a,b,c,max;
      	printf("enter the number a:");
      	scanf("%d",&a);
      	printf("enter the number b:");
      	scanf("%d",&b);
      	printf("enter the number c:");
      	scanf("%d",&c);
      	max = (a>b)?((a>c)?a:c):((b>c)?b:c);
      	    
      	        printf("largest number is %d",max);
	  }
