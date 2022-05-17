#include<stdio.h>
#include<stdlib.h>

int done[20],s=0;
int alreadydone(int e)
{
    for (int i = 0; i < 20; i++)
    {
        if (e==done[i])
        {
            return 1;
        }
    }
    return 0;
}

void missing(int a[],int b[],int sizeA,int sizeB)
{
    for (int i = 0; i < sizeB; i++)
    {
        if (alreadydone(b[i])==0)
        {
            int ecount=1; //element=b[i];

            for (int j = 0; j < sizeB; j++)
            {
                if (i==j)
                {
                    continue;
                }
                else
                {
                    if (b[i]==b[j])
                    {
                        ecount++;
                    }
                }
            }
        
            for (int j = 0; j < sizeA; j++)
            {
                if (b[i]==a[j])
                {
                    ecount--;
                }
            }
        
            if (ecount>0)
            {
                printf("Missing element %d\n%d times\n\n",b[i],ecount);
            }
            else
            {
                continue;
            }
            done[s++]=b[i];   
        }
        else
        {
            continue;
        }
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    int B[]={1,2,2,2,3,3,4,5,6};
    int sizeA=sizeof(A)/sizeof(A[0]);
    int sizeB=sizeof(B)/sizeof(B[0]);
    missing(A,B,sizeA,sizeB);

    return 0;
}