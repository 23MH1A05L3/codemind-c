#include<stdio.h>
int main()
{
    int t,n,s,r,i,n1,p;
    scanf("%d",&t);
    for(;t>0;t--)
    {
        scanf("%d",&n);
        n1=n;
        s=0;
        while(n!=0)
        {
            r=n%10;
            p=1;
            for(i=r;i>0;i--)
            {
                p=p*i;
            }
            s=s+p;
            n=n/10;
        }
        if(n1==s)
        {
            printf("Strong
");
        }
        else
        {
            printf("Not Strong
");
        }
    }
}