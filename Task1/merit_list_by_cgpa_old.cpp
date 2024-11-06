#include<iostream>
using namespace std;

int size = 0;

struct Student {
    string name;
    int id;
    float cgpa;
};

void update(Student merit_list[],int size)
{
    int i,j;
    Student temp;
    for(i=0; i<size-1; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(merit_list[i].cgpa<merit_list[j].cgpa)
            {
                temp=merit_list[j];
                merit_list[j]=merit_list[i];
                merit_list[i]=temp;
            }
            else if(merit_list[i].cgpa==merit_list[j].cgpa&&merit_list[i].id>merit_list[j].id)
            {
                temp=merit_list[j];
                merit_list[j]=merit_list[i];
                merit_list[i]=temp;
            }
        }
    }
}

void add_student(Student merit_list[],string name, int id, float cgpa, int num_merit)
{
    if(size<num_merit)
    {
        merit_list[size].name=name;
        merit_list[size].id=id;
        merit_list[size].cgpa=cgpa;
        size++;
        if(size==num_merit+1)
        {
            size--;
        }
    }
    else
    {
        if(merit_list[size-1].cgpa<=cgpa)
        {
            if(merit_list[size-1].cgpa==cgpa&&merit_list[size-1].id>id)
            {
                merit_list[size-1].name=name;
                merit_list[size-1].id=id;
                merit_list[size-1].cgpa=cgpa;
                size++;
                if(size==num_merit+1)
                {
                    size--;
                }
            }
            else
            {
                merit_list[size-1].name=name;
                merit_list[size-1].id=id;
                merit_list[size-1].cgpa=cgpa;
                size++;
                if(size==num_merit+1)
                {
                    size--;
                }
            }
        }
    }
    update(merit_list,size);
}
void print_merit_list(Student merit_list[],int size,int num_merit)
{
    int i;
    if(size<=num_merit)
    {
        for(i=0; i<size; i++)
        {
            cout<<i+1<<" th student name : "<<merit_list[i].name<<endl;
            cout<<i+1<<" th student id : "<<merit_list[i].id<<endl;
            cout<<i+1<<" th student cgpa : "<<merit_list[i].cgpa<<endl;
            cout<<endl;
        }
    }
    else
    {
        for(i=0; i<num_merit; i++)
        {
            cout<<i<<" th student name : "<<merit_list[i].name<<endl;
            cout<<i<<" th student id : "<<merit_list[i].id<<endl;
            cout<<i<<" th student cgpa : "<<merit_list[i].cgpa<<endl;
            cout<<endl;
        }
    }
}
int main()
{
    int num_students,num_merit,id,i;
    string name;
    float cgpa;
    cout<<"Enter the number of students in the class : ";
    cin>>num_students;
    cout<<" Enter number of students merit list will create : ";
    cin>>num_merit;

    Student merit_list[num_merit];

    for(i=1; i<=num_students; i++)
    {
        cout<<"Enter "<<i<<" th student name : ";
        cin>>name;
        cout<<"Enter "<<i<<" th student id : ";
        cin>>id;
        cout<<"Enter "<<i<<" th student cgpa : ";
        cin>>cgpa;
        cout<<endl;
        add_student(merit_list,name,id,cgpa,num_merit);
        print_merit_list(merit_list,size,num_merit);
    }

    return 0;
}