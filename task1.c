#include<stdio.h>
#include<string.h>

int main(){
	int s[]={1,2,3,4,5,6,7,8,9,10};
	int i,square=0,*q;
	
	q=&square;
	
	for(i=0;i<10;i++){
		square=s[i] * s[i];
		printf("the sqaure of %d : %d \n",s[i],*q);
	}
	
	return 0;
}