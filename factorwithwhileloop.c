#include<stdio.h>
 
     void main(){
     	int n,i=1,count=1;
     	printf("Enter the number : ");
     	scanf("%d",&n);
     	printf("-> ");
     	
     	       while(i<=n){
     	       	if(n%i==0){
     	       		printf("%d ",i);
     	       	}i++;
			}
			printf("are the factors of %d....",n);
	 }
