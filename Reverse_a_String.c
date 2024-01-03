#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int l=strlen(s);
    int i=0,j=l-1,temp;
    while(i<=j)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
        i++;
        j--;
    }
    for(i=0;s[i]!=NULL;i++)
    {
        printf("%c",s[i]);
    }
}