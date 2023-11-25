#include<stdio.h>
int main()
{
    int n,c=0,r,n1,n2;
    scanf("%d",&n);
    n1=n;
    n2=n*n;
    while(n1!=0)
    {
        c=c+1;
        n1=n1/10;
    }
    switch(c)
    {
        case 1:r=n2%10;
               break;
        case 2:r=n2%100;
               break;
        case 3:r=n2%1000;
               break;
        case 4:r=n2%10000;
               break;
        default:break;
    }
    if(n==r)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}