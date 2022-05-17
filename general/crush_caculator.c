/*
A love Guru determines "whether a guy's proposal is 
going to be accepted by his crush or not" just by doing 
some mysterious calculation on their names, but it takes 
too much time for him. So, he hired you as a programmer 
and now your task is to write a program that helps the 
Guru.

He reveals his mystery with you and that is:
If the guy's name is a subsequence of his crush's name, 
then she is going to accept him, otherwise she will 
reject him.

Input :
First line contains T, the number of test cases.
Next T lines contain two strings S1 and S2 which are 
the guy's name and his crush's name respectively.

Output :
For each test case, according to Guru's mystery, if the 
crush is going to accept the guy then print 
"Love you too", 
otherwise print 
"We are only friends".
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int main()
{
	int num,n,j; char *partners[2];
	scanf("%d", &num); n=num+1 ; char a[n][50],results;
    printf("%d --> %d\n\n",num,n);
    for (int i = 0; i < n; i++)
    {
        fgets(a[i],50,stdin);
    }

    for (int i = 0; i < n; i++)
    {
        char *temp = strtok(a[1]," ");  //pointer to first word of the string
        //printf("%s",temp); 
        j=0;
        while (temp!=NULL)
        {
            //printf("Loop : %d",i);
            //printf("%s",temp); 
            partners[j++]=temp;
            temp=strtok(NULL," ");
            
        }
        
    }
    for (int i = 0; i < 2; i++)
    {
        printf("partners[%d] = %s\n", i+1, partners[i]);
    }
    printf("\n%c",results);
    
    
    return 0;
}
