#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
  system("CLS");
  char str1[]="computer", str2[]="cat";
  int l1,l2,flag;
  l1=strlen(str1); l2=strlen(str2);
  //printf("\n");
  for (int i = 0; i < l1; i++)
  {
    flag=0;
      for (int j = 0; j < l2; j++)
      {
        if (str1[i]==str2[j])
        {
          flag=1;
        }
      }
      if (flag!=1)
        {
          printf("%c",str1[i]);
        }
        
  }
  
     
}