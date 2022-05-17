#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct emp
{
    int id;
    char name[40];
    char dob[20];
};

int main()
{
    struct emp bunny,soma;
    bunny.id=1001; strcpy(bunny.name,"Bunny"); strcpy(bunny.dob,"15/05/2001");
    soma.id=1001; strcpy(soma.name,"Soma"); strcpy(soma.dob,"06/01/2001");

    printf("Employ id : %d\nEmploy name : %s\nDate of Birth : %s\n\n",bunny.id,bunny.name,bunny.dob);
    printf("Employ id : %d\nEmploy name : %s\nDate of Birth : %s\n\n",soma.id,soma.name,soma.dob);

}
/*
int main()
{
    union demo
{
    int i;
    char ch[2];
};
    union demo a;
    a.i = 512;
    printf("a.i=%d\n",a.i);
    printf("a.ch[0]=%c\n",a.ch[0]);
    printf("a.ch[1]=%c\n",a.ch[1]);
    return 0;
}

#define DEF
# define i 2
int main()
{
    #ifdef=DEF
    {
        printf("%d",i*i);
    }
    #else
    {
        printf("%d",i);
    }


}
*/