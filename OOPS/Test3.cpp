#include<iostream>
#include<fstream>

using namespace std;

class Student
{
    public:

    int RollNo;
    string Name;
    int Marks;

    void addStudent(){
        ofstream fout("Students.txt", ios::app);

        cout<<"Enter Roll No"<<endl;
        cin>>RollNo;

        cout<<"Enter Name"<<endl;
        cin>>Name;
        cout<<"Marks "<<endl;
        cin>>Marks;

        fout<<RollNo<<" "<<Name<<" "<<Marks<<" "<<endl;

        fout.close();
    }

    void displayStudent(){
        ifstream fin("Students.txt");

     

        int r;
        string N;
        int M;
         cout << "\nRollNo\tName\tMarks\n";

        while(fin>>r>>N>>M){
            cout<<r<<" "<<N<<" "<<M<<endl;

       


           
        }
        fin.close();
    }

    void searchStudent(){

        ifstream fin("Students.txt");
        bool found = false;

        int SearchRollNo;
        cout<<"Enter RollNo you want to search"<<endl;

        cin>>SearchRollNo;

        int r;
        string N;
        int M;

        while(fin>>r>>N>>M)
        {
            if(r == SearchRollNo){
                cout<<"\nStudent Found\n";
                cout<<" Roll Number"<<r;
                cout<<"Name"<<N;
                cout<<"Marks"<<M;

                found = true;
                break;
            }
        }
        if(!found){
            cout<<"Student Not Found\n";
        }
        fin.close();
    };
};

int main()
{

    Student s;

    int choice;



    do{
        cout<<"\n=============Student Data Form=================\n";
        cout<<"1.Enter The studentDetails"<<endl;
        cout<<"2.Display The StudentDetails"<<endl;
        cout<<"3. Search by RollNumber"<<endl;
        cout<<"4. Exit"<<endl;

           cout<<"Enter your choice to perform functionality"<<endl;

          cin>>choice;


          switch(choice)
          {
            case 1:
            {
                s.addStudent();
                break;
            }

            case 2:
            {
                s.displayStudent();
                break;
            }
            case 3:
            {
                s.searchStudent();
                break;
            }
            case 4:
            {
                cout<<"Exiting The program"<<endl;
                break;
            }
            default:
            cout<<"Enter the valid number"<<endl;
          }
          
    }while(choice !=4);



    return 0;
}