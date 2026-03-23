#include<iostream>
using namespace std;


int main()
{

    int n;
    cin>>n;
    int arr[n];
    int pos = -1;

    for(int i =0;i<n;i++ ){
        cin>>arr[i];
    }
    int value;
    cout<<"Enter the value you want to enter "<<endl;

    cin>> value;

    for(int i = 0; i<n;i++){
        if(arr[i] == value ){
            pos = i;
            break;
        }
    }

    if(pos != 1){
        for(int i = pos;i < n-1;i++){
            arr[i] = arr[i + 1];
        }

        n--;
    }

       for(int i = 0; i<n;i++){
        cout<< arr[i]<< " " ;
 
    }






    return 0;
}