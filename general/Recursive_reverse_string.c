/*
Recursive reverse
Given a string, write a recursive routine to reverse it. For example, given the string 
'and, the reversal of the string is 'dna'.

Input Format

A string

Output Format

Reverse of the string */
#include<stdio.h>

void rev(char *string)
{
    if(*string)
    {
        rev(string+1);
        
    }
    printf("%c",*string);
    
}
void main()
{
    system("cls");
    char string[]={};
    scanf("%s",string);
    rev(string);
}