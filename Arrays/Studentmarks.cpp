// *Case Study 4: Student Marks Analysis*

// A class has n students and m subjects. Store marks in a 2D array and:

// Tasks:

// * Calculate total marks of each student
// * Find topper (highest total)
// * Find subject-wise average





#include<iostream>
#include<climits>
#include<vector>

using namespace std;

void totalMarks(vector<vector<int>> &arr, int students, int subjects)
{



    int max = INT_MIN;
    
    int topper = 0;
 
    for(int i = 0; i < students; i++){
            int sum = 0;
       

        for(int j = 0; j < subjects; j++){
            sum = sum +  arr[i][j];
        }



        // if(max < sum){
        //     max = sum;
        //     topper = i;
        // }

        cout << "Student " << i+1  << " total marks: " << sum << endl;


   
    }

        //    cout << "Student topper is  " << topper + 1 << " total marks: " << max << endl;



    

  



}

void AverageMarks(vector<vector<int>>&arr, int students, int subjects){

   

    for(int j = 0 ; j<subjects; j++){
         int sum2 = 0;
        cout<<"Subject "<< (j+1)<<" average marks"<<" ";
  
        for(int i = 0; i<students; i++){
            
            sum2 = sum2 + arr[i][j];
        }

        cout<<sum2/subjects<< " "<< endl;

    }




}













int main()
{
    int students;
    cout << "Enter the number of students: ";
    cin >> students;

    int subjects;
    cout << "Enter the subjects: ";
    cin >> subjects;

    vector<vector<int>> arr(students, vector<int>(subjects));

    // Input
    for(int i = 0; i < students; i++){
        cout << "Give student " << i + 1 << " marks:\n";
        for(int j = 0; j < subjects; j++){
            cin >> arr[i][j];
        }
    }

    // Print matrix (optional)
    cout << "Matrix:\n";
    for(int i = 0; i < students; i++) {
        for(int j = 0; j < subjects; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Function call
    totalMarks(arr, students, subjects);
    AverageMarks(arr,students,subjects);
    // compareStudents(arr, subjects);

    return 0;
}










