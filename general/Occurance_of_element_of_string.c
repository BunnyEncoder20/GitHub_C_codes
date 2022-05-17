#include<stdio.h>
#include<string.h>
void count_elements(char *s)
{
   char ch,one_time=[];
    for (int i = 0; i < strlen(s); i++)
    {
        ch=(s+i); int count=0;
        if 
        one_time[i]=ch
        for (int j = 0; j < strlen(s); j++)
        {
            if (ch==s[j])
            {
                count++;
            }
            
        }
        printf("%c : %d\n",ch,count);
    }
}
void main()
{
    system("cls");
    char s[50]="";
    scanf("%s",s);
    count_elements(s);
}