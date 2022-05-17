#include<iostream>
#include<string.h>

using namespace std;

class car
{
    private:
    string comapany_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

    public :
    car() //default
    {
        cout<<"default constructor called"<<endl;
        comapany_name="Tata";
    }
    car(string cp,string mod, string f, float m, double p)    //parameterised 
    {
        cout<<"para constructor called !"<<endl;
        comapany_name=cp; model_name=mod; fuel_type=f; mileage=m; price=p;
    }
    // car(car &c1)
    // {
    //     cout<<"copy constructor called"<<endl;
    //     comapany_name=c1.comapany_name; model_name=c1.model_name;
    //     fuel_type=c1.fuel_type; mileage=c1.mileage; price=c1.price;
    // }
    ~car() //destructor usually used to deallocate dynamically memory objects
    {
        cout<<"Destructor called!"<<endl;
    }
    void getdata(string cp, string mod, string f, float m, double p)
    {
        comapany_name=cp; model_name=mod; fuel_type=f; mileage=m; price=p;
    }
    void putdata()
    {
        cout<<"All the details given:"<<endl;
        cout<<"Company : "<<comapany_name<<endl;
        cout<<"Model : "<<model_name<<endl;
        cout<<"Fuel : "<<fuel_type<<endl;
        cout<<"Mileage : "<<mileage<<endl;
        cout<<"MRP : "<<price<<endl;
    }

};



int main()
{
    car c1;
    c1.putdata();
    car c2("Lambo","Veneno","Special car fuel",70.89,78000);
    c2.putdata();
    car c3=c2; //copy constructor caller
    c3.putdata();
    cout<<endl;
    return 0;
}