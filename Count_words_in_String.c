#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,c=1;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}