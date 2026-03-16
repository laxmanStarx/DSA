#include<iostream>
using namespace std;


void printArray(int arr[], int size){

    for(int i = 0; i < size;i++){
        cout<< arr[i] << " ";
    }cout<< endl;

}



void swapAlternative(int arr[], int n){
    
    for(int i =0; i < n; i+=2){
        if(i+1 < n){
          swap(arr[i], arr[i+1]);
        }
    }
    
}


int main(){


    int odd[5] = {50,60,80,90,20};

    swapAlternative(odd, 5);
    printArray( odd, 5);

    cout<<endl;

    





    return 0;
}
