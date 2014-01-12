/*
The following program computes modular multiplicative inverse of a (modb)
inputs : two integers say A and B
output: one integer with is modular multiplicative inverse of A (mod B)

*/

#include<stdio.h>

int gcdFind(int,int,int *,int *); 
int main(){
        int big,sml,gcd,x,y;
        
        
        printf("\n \n \n");
    	printf("enter a number and press enter\n");
        scanf("%d",&big);
        printf("enter a number with which you want to find the modulur multiplicative inverse of the first number \n");
        scanf("%d",&sml);
        
        
        
        gcd=gcdFind(big,sml,&x,&y);
        
        if(gcd>1){  //necessary to check because modular multiplicative inverse doesn't exist for non-coprime numbers
        	printf("the numbers you entered are not co-primes\n");
        	printf("so modular multiplicative inverse does not exist \n");
        	
        }
        else{
        	printf("the modular multiplicative inverse of \n");
        	printf("%d (mod %d) is %d  \n",big,sml,x);
        }
        return 0;
}



int gcdFind(int b,int s,int* c1,int * c2){
        int r=0,x2=1,x1=0,y2=0,y1=1,q=0,x,y;
        if(s==0)
                {
                *c1=x2;
                *c2=y2;
                return b;
                }
        while(s>0)
        {
                q=b/s;
                r=b%s;
                b=s;
                s=r;
                x=x2-q*x1;
                y=y2-q*y1;
                x2=x1;
                y2=y1;
                x1=x;
                y1=y;
                }
        *c1=x2;
        *c2=y2;
        return b;
}
