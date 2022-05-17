/*Flightless birds are birds which cannot fly.Two key differences between flying and flightless birds are the smaller wing bones of flightless birds and the absent (or greatly reduced) keel on their breastbone. The keel anchors muscles needed for wing movement. Flightless birds also have more feathers than flying birds.

Characteristics of the bird

Bird : Feathers, wings

Robins are fairly large songbirds with a large, round body, long legs, and fairly long tail

Swallow bird with blue upperparts and a long, deeply forked tail​

Penguin : Flippers, Swimming birds

Kiwi No Flippers, Can’t swim                                                                                                                                              

Flying birds: featherS: larger wings, Keel bone  supported

Non Flying birds: smaller wings ,Keel bone not supported

Need to consider the following cout statements in each class

Robin is a singing round body : In Robin class

Swallow with blue upperparts and a long, deeply forked tail​ : Swallow class

Penguin is with flippers, swimming : Penguin class

Kiwi No Flippers, Can’t swim : Kiwi class

having feathers and wings, keel bone not supported non flying : Non Flying class

having feathers and wings, keel bone supported flying: Flying class

bird: bird class

Input Format:

Enter the Bird name (Kiwi)

Output Format

The entire description about the bird (Kiwi No Flippers, Can’t swim having feathers and wings, keel bone supported flying bird)*/

#include<iostream>
#include<string.h>
using namespace std;

class birds
{
    public :
    char c0[16]="Feathers, wings";
    
};

class flyingbirds : public birds
{
    public :
    char  f0[54]="having feathers and wings, keel bone supported flying";
    flyingbirds()
    {
       
    }
};

class robin : public flyingbirds
{
    public :
    char r0[30]="Robin is a singing round body";
    
    void display()
    {
        cout<<r0<<" "<<f0<<" "<<c0<<endl;
    }
}rr;
class swallow : public flyingbirds
{
    public :
    char s0[60]="Swallow with blue upperparts and a long, deeply forked tail";
    void display()
    {
        cout<<s0<<" "<<f0<<" "<<c0<<endl;
    }
    
}ss;


class nonflyingbirds : public birds
{
    public :
    char f1[62]="having feathers and wings, keel bone not supported non flying";
    
};
class penguin : public nonflyingbirds
{
    public :
     char p0[35]="Penguin is with flippers, swimming";
    
    void display()
    {
        cout<<p0<<" "<<f1<<" "<<c0<<endl; 
    }
}pp;
class kiwi : public nonflyingbirds
{
    public :
    char k0[28]="Kiwi No Flippers, Cant swim";
    void display()
    {
        cout<<k0<<" "<<f1<<" "<<c0<<endl;
    }
}kk;


int main()
{
    char bird[20]; int res;
    cin>>bird;
    
    if(strcmp(bird,"robin")==0)
        res=0;
    else if(strcmp(bird,"swallow")==0)
        res=1;
    else  if(strcmp(bird,"penguin")==0)
        res=2;
    else if(strcmp(bird,"kiwi")==0)
        res=3;

    switch (res)
    {   
    case 0: rr.display();
        break;
    case 1: ss.display();
        break;
    case 2: pp.display();
        break;
    case 3: kk.display();
        break;
    default:
        cout<<"wrong input!";
    }
    return 0;
}