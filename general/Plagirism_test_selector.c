/*
"I'm gonna make him an offer he can't refuse".

 

The problem setter loves movies but you want marks , after all 
you have to pass. Listening to your second year , and not taking 
any advice from third and fourth year seniors , you cheated in 
your exam. Now you are worried if you will be caught and run to 
your problem setter , who is a  third year senior. He tells you 
not to worry. You should only worry if your paper will go through 
a plagiarism test.  

The good thing about IIITA this year is that there is a strange 
law about the plagiarism checking. If there are N students in the 
course , and the score of the ith student is X , then his paper is 
subjected to plagiarism if and only if there is atleast 1 more 
student whose score lies in the interval [ X-K , X+K ]  , both 
included.  
The Profs like to call this number K as No Mercy Value. 

Now , you have all the details regarding the above checking. You 
know N , number of students taking that course , K =  the Mercy 
value set by the Prof and the marks scored by all N students. 

You want to find how many students should actually take the 
pressure of getting caught in the plagiarism test and how many 
student should simply sit back and relax. You also want to print 
these values with a message as shown in the sample output. 

INPUT :
The first line has 2 integers N and K  , denoting the number of 
students in the course  with you and the NoMercy Value chosen by 
the Proffesor.

The next line contains N integers ,   where ith integer is the 
marks scored by the ith student in the course. It is guaranteed 
that all students score non-negative integral marks( highly 
improbable in Offline semesters ><).

OUTPUT :
2 lines should be printed where first and second line should be 
like :

X students need to worry!
Y students should relax!

NOTE :  You actually need to print the values of X and Y instead 
of 'X' and 'Y'. */
#include<stdio.h>
#include<stdlib.h>
void checker_selector(int num,int k,int marks[][2])
{
    int x,yes_witch=0,no_worry=0;
    for (int i = 0; i < num; i++)
    {
        x=marks[i];
        
        for (int j = 0; j < num; j++)
        {
            if (i==j || marks[i][1]==1)
            {
                continue;
            }
            
            //printf("x=%d\tk=%d\tj=%d\n",x,k,marks[j]);
            if (x-k<=marks[j] && marks[j]<=x+k)
            {
                yes_witch+=1;
                marks[i][1]=1;
            }
            
        }
        
    }
    printf("%d Students need to worry!\n",yes_witch);
    printf("%d Students should relax!",no_worry);
    
}

void main()
{
    system("cls");
    int num,k,marks[50][2];
    scanf("%d",&num);
    scanf("%d",&k);
    for (int i = 0; i < num; i++)
    {
        scanf("%d",&marks[i][0]);
        marks[i][1]=0;
    }
    printf("\n\n");
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    
    
    checker_selector(num,k,marks);
}