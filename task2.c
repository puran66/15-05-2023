#include<stdio.h>

  int main(){
  	int a,b;
  	int *p,*q,swp;
  	
  	p=&a;
  	q=&b;
  	
  	printf("Enter the value to swap : \n");
  	scanf("%d %d",&a,&b);
  	
  	swp=*q;
  	*q=*p;
  	*p=swp;
  	
  	printf("After swap value : \n%d \n %d",*p,*q);
  	
  	return  0;
  }