#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
/*
int main()
{
    int x=10, *px=&x; int y[5]={1,2,3,4,5};
    cout<<"Address : "<<&x<<endl<<"Value :"<<x<<endl;
    cout<<"Address : "<<y<<endl<<"Value :"<<*y<<endl<<"Next element : "<<*(y+1)<<" "<<*(y+2)<<endl;

    int **dp=&px;
    cout<<"Address of double pointer : "<<dp<<endl<<"Value :"<<**dp<<endl;
}*/






int main()
{
	int a,b,c; int c_num;
	cin>>a>>b>>c;
	int setab[c]; int j=0;
	for(int i=2;c>0;i++)
	{
		if(i%a==0||i%b==0)
		{
			c--;
			c_num=i;
		}
	}
	//cout<<c_num<<endl;

    if(c_num%a==0 && c_num%b==0)
	{
		int lcm;
        for(int i=1;i<=a*b;i++)
        {
            if(i%a==0 && i%b==0)
            {
                lcm=i;
                break;
            }
        }
        //cout<<lcm<<endl;
		while(c_num>=0)
		{
			
			cout<<c_num<<" ";
            c_num-=lcm;
		}
	}

	else if(c_num%a==0)
	{
		while(c_num>=0)
		{
			
			cout<<c_num<<" ";
            c_num-=a;
		}
	}
	else if(c_num%b==0)
	{
		while(c_num>=0)
		{
			
			cout<<c_num<<" ";
            c_num-=b;
		}
	}
	
	
}