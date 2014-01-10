#include<stdio.h>
void checkBigSmall(int *, int *);
int gcdFind(int,int,int *,int *);
int main(){
        int big,sml,gcd,x,y;
        printf("enter the numbers you want to find the gcd of \n");
        scanf("%d %d",&big,&sml);
        printf("numbers entered are \n %d \n %d\n",big,sml);
        checkBigSmall(&big,&sml);
        printf("numbers entered are \n %d \n %d\n",big,sml);
        gcd=gcdFind(big,sml,&x,&y);
        printf("GCD is %d \n ",gcd);
        printf("the result is %d * %d + %d * %d = %d \n ",big,x,sml,y,gcd);
        return 0;
}

void checkBigSmall(int *b,int *s){
        if(*b < *s){
        *b=(*b)+(*s);
        *s=(*b)-(*s);
        *b=(*b)-(*s);
}
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
