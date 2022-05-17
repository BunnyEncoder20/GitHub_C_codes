//insertion sort on vector of objects
#include<bits/stdc++.h>
#include<list>
#include<algorithm>
using namespace std;
int size = 3;

class student{

private:
    string student_name,student_reg_num;
    int student_marks;

public:
    student(string name,string reg,int marks)
    {
        student_name = name;
        student_reg_num = reg;
        student_marks = marks;
    }

    string get_name() 
    {
        return student_name;
    }
    string get_reg()
    {
        return student_reg_num;
    }
    int get_marks()
    {
        return student_marks;
    }

};

void swap(int *minptr,int *iptr)
{
    int temp = *minptr;
    *minptr = *iptr;
    *iptr = temp;
}
void selection_sort(vector<student>& list_students)
{
    vector<student> marks_list;
    // for (int i = 0; i < size; i++)
    // {
    //     marks_list[i]=list_students[i].get_marks();
    // }
    
    for (int i = 0; i < size-1; i++)
    {
        int minimum_index = i;
        
        for (int j = i+1; j < size; j++)
        {
            if(list_students[j].get_marks()<list_students[minimum_index].get_marks())
                minimum_index = j;
            
            // swap(list_students[minimum_index].get_marks(),list_students[i].get_marks());
            // int minptr = list_students[minimum_index];
            // int iptr = list_students[i];
            // swap(&minptr,&iptr);

            swap(list_students[minimum_index],list_students[i]);
        }
    }
}

void fill_vector(vector<student>& list_students)
{
    string name,reg; int marks;
    for (int i = 0; i < size; i++)
    {   
        cout<<"\nEnter name:\n";
        cin>>name;
        cout<<"\nEnter registration number\n";
        cin>>reg;
        cout<<"\nEnter marks\n";
        cin>>marks;

        student newstudent(name,reg,marks);
        list_students.push_back(newstudent);
    }   
}

void show_vector(vector<student>& list_students)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"\nName : "<< list_students[i].get_name()<<"\n";
        cout<<"Registration Number : "<< list_students[i].get_reg()<<"\n";
        cout<<"Marks : "<< list_students[i].get_marks()<<"\n";
    }
    
}

int main()
{
    vector<student> list_students; 
    fill_vector(list_students);
    show_vector(list_students);
    selection_sort(list_students);
    show_vector(list_students);
    
    return 0;
}