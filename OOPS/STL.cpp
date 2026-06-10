#include<iostream>
#include<vector>

using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    int marks;

    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nRoll No : " << rollNo;
        cout << "\nName    : " << name;
        cout << "\nMarks   : " << marks << endl;
    }
};

int main()
{
    vector<Student> s1;

    int choice;

    do{
        cout<<"=============Student detail form===============";
        cout<<"1. Add Student"<<endl;
        cout<<"2. Display Student"<<endl;
        cout<<"3. Search by Id"<<endl;
        cout<<"4. exiting The program"<<endl;

        cout<<"Enter choice"<<endl;

        switch(choice)
        {
            case 1:
            {
                Student s;
                s1.push_back(s);
                break;
            }

            case 2:
            {
               if(s1.empty()){
                cout<<"No data found";
               }else{
                for(int i = 0; i<s1.size(); i++)
                {
                    s1[i].display();
                }
        }
     
            }

            case 3:
            {
                bool found = false;
                int 
            }
        }
    }


    

    return 0;
}