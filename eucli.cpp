#include<stdio.h>

void checkBigSmall(int *,int *);//method to put bigger number in big and small in small
int gcdFind(int b,int s);//method to find gcd using euclidean algorithm

int main(){
	int big,sml,gcd;
	printf("enter the numbers you want to find the gcd of \n");
	scanf("%d %d",&big,&sml);
	printf("numbers entered are \n %d \n %d\n",big,sml);
	checkBigSmall(&big,&sml);
	printf("numbers entered are \n %d \n %d\n",big,sml);
	gcd=gcdFind(big,sml);
	printf("GCD is %d \n ",gcd);
	return 0;
}

void checkBigSmall(int *b,int *s){
	if(*b < *s){
	*b=(*b)+(*s);
	*s=(*b)-(*s);
	*b=(*b)-(*s);
}
}


int gcdFind(int b,int s){
	int r=0;
	if(s==0)
		return b;
		
	r=b%s;
	b=s;
	s=r;
	gcdFind(b,s);
}
