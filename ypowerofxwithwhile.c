#include<stdio.h>
 
   void main(){
   	int x,y,i=0,ans=1;
   	printf("Enter the number :");
    scanf("%d",&x);
    printf("Enter the power of x :");
    scanf("%d",&y);
    
        while(i<y){
        	ans = ans*x;
        	i++;
		}
		printf("%d",ans);
   }
