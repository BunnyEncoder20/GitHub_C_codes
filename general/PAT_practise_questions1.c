/*
Numeric addresses for computers on the international network, 'Internet' has four parts, separated by periods, of the form   xxx.yyy.zzz.mmm    where  xxx ,  yyy ,  zzz , and  mmm  are positive integers. Locally, computers are usually known by a nickname as well.

Sample Data

IP address       Name

111.22.3.44        platte

555.66.7.88        wabash

111.22.5.66        green

0.0.0.0                none

A pair of computers are said to be in same locality when the first two components of the addresses are same. Given the details of some computers, design an algorithm and write a C program to display a list of messages identifying each pair of computers from the same locality. In the messages, the computers should be identified by their nicknames. In this example, the message to be displayed will be Machines platte and green are on the same local network. For example, given IP address and nick name of machines as follows:

101.33.2.1              Atlas
101.33.56.80          Horizon
101.43.45.74          Pluto

Print 'Machines Atlas and Horizon are on the same local network'.

Input Format

Number of computers 'n'

IP address of the computer1 as a String

Nick names of the computer1 as a String

IP address of the computer2 as a String

Nick names of the computer2 as a String

....

IP address of the computer n as a String

Nick names of the computer n as a String

Output Format

For each pair of machines in the same local network, print:

Machines A and B are on the same local network (A and B are names of the respective machines)
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n,len;
    printf("Enter the number of computers :"); scanf("%d",&n);
    len=2*n;
    char stringy[len][20]; //printf("%d",sizeof(stringy));
    for (int i = 0; i <len; i+=2)
    {
        printf("Enter the IP address of the computer :\n");
        scanf("%s",&stringy[i]);
        printf("Enter the nickname of the computer :\n");
        scanf("%s",&stringy[i+1]);
    }
    printf("\n\n");
    for (int i = 0; i <len; i+=2)
    {
        printf("The Ip address of machine %d is :\n%s\n",i+1,stringy[i]);
        printf("The nickname of machine %d is :\n%s\n\n",i+1,stringy[i+1]);
    }
    printf("\n\n");
    //printf("%s\n%s\n%d\n\n",stringy[0],stringy[2],strncmp(stringy[0],stringy[2],7));

    for (int i = 0; i <len; i+=2)
    {
        for (int j = i; j < len; j+=2)
        {
            if (i==j)
            {
                continue;
            }

            if (strncmp(stringy[i],stringy[j],7)==0)
            {
                printf("Machines %s and %s are on the same local network",stringy[i+1],stringy[j+1]);
            }
            else
            {
                printf("Nope");
            }

        }


    }


    return 0;
}