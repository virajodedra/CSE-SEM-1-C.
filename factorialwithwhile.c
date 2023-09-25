#include<stdio.h>
  
     void main(){
     	int x,i=1,ans=1;
     	
     	printf("Enter the number :");
     	scanf("%d",&x);
     	
     	    while(i<=x){
     	    	ans = i*ans;
     	    	i++;
			 }
	      printf("%d",ans);
	  }
