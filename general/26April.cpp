#include<iostream>

using namespace std;

int main()
{
    int i,j,r,c,flag=0;
    cin>>r>>c;
    char cc[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>cc[i][j];
        }
    }
    
    if(n > 2)
    {
     for(i=0;i<n-1;i++)
        {
            for(j=0;j < n-2;j++)
            {
                if((cc[i][j]==cc[i+1][j])&&(cc[i][j]==cc[i+1][j+1])&&(cc[i][j]==cc[i+1][j+2]))
                {
                    flag=1;
                    cout<<"yes";
                    break;
                
                }

            }
                

        }
            
            
           
        
    }
    if(flag==0)
        {cout<<"No";}
           
    
    return 0;
}