#include<stdio.h>
int main()
{
    int n,i,j,r,s,s1;
    scanf("%d",&n);
    s=n;
    s1=n;
    while(s1>=10)
    {
        s=s1;
        s1=0;
    while(s!=0)
    {
        r=s%10;
        s1=s1+r;
        s=s/10;
    }
    
    }
    printf("%d",s1);
}