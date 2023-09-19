#include<stdio.h>
  
    void main(){
    	int a,b,x,y;
    	
    	printf("Enter the number a :");
    	scanf("%d",&a);
    	printf("Enter the number b :");
    	scanf("%d",&b);
    	
    	x=a;
    	y=b;
    	   
    	   while(x>=a && b>=x){
    	   	
    	   	 if(x%2==0){
    	   	 	printf("%d\n",x);
				}
				x++;
		   }
		   while(y>=a && b>y){
    	   	
    	   	 if(y%2==0){
    	   	 	printf("%d\n",y);
				}
				y++;
		   }
		   
		      
	}
