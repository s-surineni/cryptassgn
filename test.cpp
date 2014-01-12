#include<stdio.h>
void checkBigSmall(int *, int *);
int gcdFind(int,int,int *,int *);
int main(){
        int big,sml,gcd,x,y;
        printf("enter the numbers you want to find the gcd of \n");
        scanf("%d %d",&big,&sml);
        printf("numbers entered are \n %d ",big%sml);
        
        return 0;
}



