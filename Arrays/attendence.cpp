#include<iostream>
#include<vector>

using namespace std;


void calculateAttendence(vector<vector<int>> &arr , int days, int students)
{



  

   
    for(int j =0; j< students; j++){

       int sum = 0;
   

        for(int i = 0; i < days; i++){
             sum = sum + arr[i][j];

           

        }

         int attendencePercent = (100*sum)/days;
        //  if(attendencePercent > 75){

        //       cout<<"Student : "<< j+1<<" attendence : "<<endl;

        //  }else{

        //  }
                

         

        cout<<"Student : "<< j+1<<" attendence : "<< attendencePercent<<endl;


    }




}




int main(){



        int students;

    cout<<"Enter the number of students you want to check the attendence: "<<endl;
    cin>>students;

    int days;
    cout<<"Enter the number of days you want to check the attendence: "<<endl;
    cin>>days;

    // int students;

    // cout<<"Enter the number of students you want to check the attendence: "<<endl;
    // cin>>students;

    vector<vector<int>> arr(days, vector<int> (students));


    for(int i = 0; i<days;i++){
        cout<<"Enter the day "<< i+1<<" "<<"attendence";
        for(int j = 0; j < students; j++){
            cin>>arr[i][j];
        }
    }



        for(int i = 0; i<days;i++){
        for(int j = 0; j < students; j++){
            cout<<" " <<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }

    calculateAttendence(arr, days, students);







    




    return 0;
}