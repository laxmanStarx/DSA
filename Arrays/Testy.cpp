#include<iostream>
#include<fstream>

using namespace std;

class Student{
    public:
    int RollNo;
    string Name;
    string CourseName;
    int Marks;
    


    void addStudent(){
        ofstream fout("Student.txt", ios::app);

        cout<<"Enter Roll Number";
        cin>>RollNo;


        cout << "Enter Name: ";
        cin >> Name;

        cout<<"Enter CourseName";
        cin>>CourseName;

        cout << "Enter Marks: ";
        cin >> Marks;

       fout<<RollNo<<Name<<CourseName<<Marks;

        fout.close();
    }

    void displayStudent()
    {
        ifstream fin("Student.txt");
          int R;
    string N;
    string C;
    int M;

        while(fin>>RollNo>>Name>>CourseName>>Marks){
            cout<<R<<N<<C<<M;
        }
        fin.close();
    }

    void searchStudent()
    {
        int SearchRollNo;
        bool found = false;
        cout<<"Enter SearchRoll";
        cin>>SearchRollNo;
    int R;
    string N;
    string C;
    int M;

        while(fin>>R>>N>>C>>M){
            if(R == SearchRollNo)
            {
                cout<<"Student data found"<<endl;
                cout<<R<<" "<<N<<" "<<C<<" "<<M;
                found = true;
                break;
            }
        }
        fin.close();
    }
}