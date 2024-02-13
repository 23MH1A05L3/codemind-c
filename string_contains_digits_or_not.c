#include<stdio.h>
int main()
{
    int t,i,flag;
    scanf("%d",&t);
    char s[100];
    for(;t>0;t--)
    {
         flag=0;
        scanf(" %[^
]s",s);
        for(i=0;s[i]!=NULL;i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                printf("Yes
");
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("No
");
        }
        
    }
}