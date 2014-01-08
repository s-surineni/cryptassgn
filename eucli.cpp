#include<stdio.h>

void checkBigSmall(int *,int *);

int main(){
	int big,sml;
	printf("enter the numbers you want to find the gcd of \n");
	scanf("%d %d",&big,&sml);
	printf("numbers entered are \n %d \n %d\n",big,sml);
	checkBigSmall(&big,&sml);
	return 0;
}

void checkBigSmall(int *b,int *s){
	
}
