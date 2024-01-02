#include<stdio.h>
int main()
{
    char s[100],ch;
    scanf("%[^
]s",s);
    scanf(" %c",&ch);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==ch)
        {
            printf("True
%d",i);
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("False");
    }
}