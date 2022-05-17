#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    int *ptr = (int*)calloc(3,sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",ptr[i]);
    }

    printf("\n\nEnter the value of new array size :");
    scanf("%d",&n); printf("\n");
    ptr = (int*)realloc(ptr,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",ptr[i]);
    }


    free(ptr);

    union emp
    {
        int id; char name[20];
    }un;
    un.id = 101; un.name="Varun";
    struct emp1
    {
        int id2; char name2[20];
    }st;
    st.id2=102; st.name2="Soma";

    printf("\nSize of union : %d\nSize of of structure : %d",sizeof(un),sizeof(st));
    printf("\nUnion id :%d\nUnion name : %s",un.id,un.name);
    return 0;
}