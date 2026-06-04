#include <iostream>
#include <fstream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    float marks;

    void addStudent()
    {
        ofstream fout("student.txt", ios::app);

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;

        fout << rollNo << " "
             << name << " "
             << marks << endl;

        fout.close();

        cout << "Record Added Successfully!\n";
    }

    void displayStudents()
    {
        ifstream fin("student.txt");

        int r;
        string n;
        float m;

        cout << "\nRollNo\tName\tMarks\n";

        while (fin >> r >> n >> m)
        {
            cout << r << "\t"
                 << n << "\t"
                 << m << endl;
        }

        fin.close();
    }

    void searchStudent()
    {
        ifstream fin("student.txt");

        int searchRoll;
        bool found = false;

        cout << "Enter Roll No to Search: ";
        cin >> searchRoll;

        int r;
        string n;
        float m;

        while (fin >> r >> n >> m)
        {
            if (r == searchRoll)
            {
                cout << "\nStudent Found\n";
                cout << "Roll No : " << r << endl;
                cout << "Name    : " << n << endl;
                cout << "Marks   : " << m << endl;

                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << "Student Not Found\n";
        }

        fin.close();
    }
};

int main()
{
    Student s;
    int choice;

    do
    {
        cout << "\n===== Student Record System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display All Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.addStudent();
            break;

        case 2:
            s.displayStudents();
            break;

        case 3:
            s.searchStudent();
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 4);

    return 0;
}