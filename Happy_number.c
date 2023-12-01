#include<stdio.h>
int main()
{
    int n,s,s1,r;
    scanf("%d",&n);
    s1=n;
    s=n;
    while(s1>=10)
    {
        s=s1;
        s1=0;
        while(s!=0)
        {
            r=s%10;
            s1=s1+r*r;
            s=s/10;
        }
    }
    if(s1==1||s1==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}