#include<stdio.h>
int main()
{
    int a,b,c,i;
    scanf("%d%d",&a,&b);
    int s=a+b+c;
    for(i=1;i;i++)
    {
        c=i;
        s=a+b+c;
        int c1=0;
        for(int j=1;j<=s;j++)
        {
            if(s%j==0)
            {
                c1=c1+1;
            }
        }
        if(c1==2)
            {
                printf("%d",i);
                break;
            }
    }
    
}