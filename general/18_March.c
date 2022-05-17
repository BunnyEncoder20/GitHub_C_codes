#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
int main()
{
    char str1[20]="aamboozled";
    char str2[]="Chap";
    char str3[20];
    int l=strlen(str1);
    printf("Length of string 1 = %d",l);
    printf("\n%d",strcmp(str1,str2));

    char str4[]="bolo"; char str5[]="yolo";
    printf("\n%d",strcmp(str4,str1));
    return 0;
}
void stringswap(char *str1, char *str2)
{
    char temp[40];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

}
int main()
{
    char str1[20],str2[20];
    printf("Enter the 2 strings : \n");
    scanf("%s %s",&str1,&str2);
    printf("str1 = %s\nstr2 = %s\n\n",str1,str2);
    stringswap(str1,str2);
    printf("\n\nstr1 = %s\nstr2 = %s\n\n",str1,str2);
    return 0;
}
*/


int main()
{
    int i,j; char name[7][20] , temp[20];

    for(i=0;i<7;i++)
    {
        scanf(" %[^\n]",&name[i]);  //use space in front of " %[^\n]" when using in a for loop
    }


    for(i=0;i<6;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    for(i=0;i<7;i++)
    {
        printf("\n%s",name[i]);
    }

    return 0;
}