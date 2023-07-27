#include<stdio.h>
int main()
{
    int i,j;
    char s1[1000],s2[1000],s3[1000];
    scanf("%s %s", s1,s2);
    for(i=0,j=0;s2[i]!='\0';i++,j++)
    {
        s3[j]=s2[i];
    }
    for(i=0;s2[i]!='\0';i++,j++)
    {
        s3[j]=s2[i];
    }
    s3[j]='\0';
    j=0;
    for(i=0;s3[i]!='\0';i++)
    {
        if(s3[i]==s1[j])
        {
            j++;
        }
        else
            j=0;
        if(s1[j]=='\0')
        {
            printf("1");
            break;
        }
    }
    if(s1[j]!='\0')
    {
        printf("-1");
    }
    return 0;
}