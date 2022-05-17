/* 
Q)

*/
#include<stdio.h>

int main()
{
    int r,c,i,j,arr[50],sum,maxi=0,a,b;
    scanf("%d",&r); scanf("%d",&c);
    int matrix[r][c];
    for ( i =0;i<r;i++)
    {
        for( j=0;j<c;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(i=0;i<c-2;i++)
    {
        for(j=i+2;j<c;j++)
        {
            sum=0;
            if(i==0 && j==c-1)
            {
                continue;
            }
            else
            {
                for(int k=0;k<r;k++)
                {
                    for(int l=i;l<=j;l++)
                    {
                        if(k==0 || k==r-1 || l==i || l==j)
                        {
                            sum+=matrix[k][l];
                        }
                    }
                }
                if(maxi<sum)
                {
                    maxi=sum; a=i; b=j;
                }
            }
            
        }
        
    }
    
    printf("%d\n",maxi);
    for (i=0;i<r;i++)
    {
        for(int j=a;j<=b;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}