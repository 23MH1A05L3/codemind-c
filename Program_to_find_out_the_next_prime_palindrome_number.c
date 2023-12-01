#include<stdio.h>
int main()
{
    int n,i,j,rev=0,on,c,a,r;
    scanf("%d",&n);
    for(i=n+1;i;i++)
    {
        rev=0;
        
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
            
            a=i;
            while(a!=0)
            {
                r=a%10;
                rev=rev*10+r;
                a=a/10;
            }
        }
        if(i==rev)
            {
                printf("%d",rev);
                break;
            }
    }
}