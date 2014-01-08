#include<stdio.h>

void checkBigSmall(int *,int *);//method to put bigger number in big and small in small

int main(){
	int big,sml;
	printf("enter the numbers you want to find the gcd of \n");
	scanf("%d %d",&big,&sml);
	printf("numbers entered are \n %d \n %d\n",big,sml);
	checkBigSmall(&big,&sml);
	printf("numbers entered are \n %d \n %d\n",big,sml);
	return 0;
}

void checkBigSmall(int *b,int *s){
	if(*b < *s){
	*b=(*b)+(*s);
	*s=(*b)-(*s);
	*b=(*b)-(*s);
}
}
