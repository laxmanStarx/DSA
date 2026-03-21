#include<iostream>
using namespace std;




int main(){

    int rows;
    cout<<"enter the number of rows: "<<endl;

    cin>>rows;

    int column;

     cout<<"enter the number of rows: "<<endl;

     cin>>column;

     int arr[rows][column];

     for(int i = 0;i<rows; i++){
        for(int j = 0; j< column; j++){
            cout<<"Enter your element: ";
            cin>> arr[i][j];
        }
     }

         for(int i = 0;i<rows; i++){
        for(int j = 0; j< column; j++){
           
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }


     return 0;

     





}