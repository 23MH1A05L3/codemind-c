#include<stdio.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
        {
            c++;
        }
    }
    printf("%d",c);
}