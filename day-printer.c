#include<stdio.h>
  
     void main()
     {
     	int n;
     	printf("enter the number :");
     	scanf("%d",&n);
     	
     	switch(n){
     		case 1 : printf("monday");
     		         break;
     	    case 2 : printf("tuesday");
     		         break;
     		case 3 : printf("wednsday");
     		        break;
     	    case 4 : printf("thurday");
     	            break;
     	    case 5 : printf("friday");
     	            break;
     	    case 6 : printf("saturday");
     	             break;
     	    case 7 : printf("sunday");
     	            break;
     	    default : printf("\n invalid input");
     	             break;
		 }
	 }
