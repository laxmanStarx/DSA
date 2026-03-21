#include<iostream>
using namespace std;



int main()

{

    int rows, col;

    cout<<"Enter the number of rows"<<endl;

    cin>> rows;

    cout<<"Enter the number of columns"<<endl;

    cin>>col;

    int arr[rows][col];
    int B[rows][col];
    int result[rows][col];

    for(int i =0;i < rows;i++){
        for(int j = 0; j < col; j++){

            cin>>arr[i][j];



        }
    }

        for(int i =0;i < rows;i++){
        for(int j = 0; j < col; j++){

            cin>>B[i][j];



        }
    }



        for(int i =0;i < rows;i++){
        for(int j = 0; j < col; j++){
            result[i][j] = arr[i][j] + B[i][j];

            



        }
    }

        for(int i =0;i < rows;i++){
        for(int j = 0; j < col; j++){
            cout<<result[i][j]<<" ";

            



        }
        cout<< endl;



    }










    return 0;
}

