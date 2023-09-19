#include<stdio.h>
  
     void main()  {
     	int a,b,c,d;
     	printf("Enter the number a :");
     	scanf("%d",&a);
     	printf("Enter the number b :");
     	scanf("%d",&b);
     	printf("Enter the number c :");
     	scanf("%d",&c);
     	
     	
     	d = (a>b)?1:2;
     	
     	switch(d) {
		 
     	  
     	    case 1 :printf("%d*%d = %d, a,b,a*c");
			        break;
					
			case 2 : printf("%d*%d =%d",b,c,b*c);
		        	break;
	             }
	             
	         }
