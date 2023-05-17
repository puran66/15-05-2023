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
  	
  	printf("After swap value : \n %u => %d \n %u => %d",q,*p,p,*q);
  	
  	return  0;
  }