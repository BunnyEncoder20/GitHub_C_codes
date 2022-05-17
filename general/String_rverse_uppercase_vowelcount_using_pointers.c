#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void funky(char *string,int *numa,int *nume,int *numi,int *numo,int *numu,char *revstring,char *upstring)
{
    char *chr; *numa=0;*nume=0;*numi=0;*numo=0;*numu=0;
    strcpy(revstring,strrev(string));
    chr=string;
    while (*chr!='\0')
    {
        switch (*chr)
            {
            case 'a': ++*numa;
            break;
            case 'e': ++*nume;
            break;
            case 'i': ++*numi;
            break;
            case 'o': ++*numo;
            break;
            case 'u': ++*numu;
            }
        chr++;
    }
    
    
    strcpy(upstring,strupr(strrev(string)));
}
void main()
{
    system("CLS");
    char string[50]={}; char revstring[50]={};char upstring[50]={};
    int numa=0,nume=0,numi=0,numo=0,numu=0;

    gets(string); 
    funky(string,&numa,&nume,&numi,&numo,&numu,revstring,upstring);
    printf("%s",revstring);
    printf("\n%s",upstring);
    printf("\na : %d \ne : %d \ni : %d \no : %d \nu : %d",numa,nume,numi,numo,numu);
    
}