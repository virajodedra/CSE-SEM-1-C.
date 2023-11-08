#include<stdio.h>

 struct Date{
 	int dd;
 	int mm;
 	int yy;
 };
 
 struct Employee{
 	
 	char name[1000];
     struct Date jd;
 	struct Date bd;
 	int salary;
 	int age;
 };
 
    void main(){
    	
    	
    	 struct Employee a1;
    	a1 = {"odedra viraj ",18-08-2006,8-11-2023,100000,18};
//    	a1.bd.dd =18;
//    	a1.bd.mm =8;
//    	a1.bd.yy =2006;
//    	a1.age = 18;
//    	a1.jd.dd=8;
//    	a1.jd.mm=11;
//    	a1.jd.yy=2023;
//    	a1.salary = 10000000;
//    	
    	
    	printf("\n Name : %s",a1.name);
    	printf("\n Birth date : %d %d %d",a1.bd.dd ,a1.bd.mm ,a1.bd.yy);
    	printf("\n Age : %d",a1.age);
    	printf("\n Birth date : %d %d %d",a1.jd.dd ,a1.jd.mm ,a1.jd.yy);
    	printf("\n Salary : %d",a1.salary);
    	
    }
    	
    	
    	
    	
	}
	
