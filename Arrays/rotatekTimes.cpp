#include<iostream>
using namespace std;

void rotatedArray(int* arr , int n){


         int k;

         cin>> k;
      


    while(k > 0){
     
 


    int firstElement = arr[n-1];

    for(int i = n-k; i >= 0; i--){
       arr[ i + 1] = arr[i];
       
    }

    arr[0] = firstElement;

    k--;

    }

    for(int i = 0; i < n; i++){
        cout<<arr[i];
    }
};


int main()
{

    int arr[7] = {2,3,4,5,6,7,8};



    rotatedArray(arr , 7);



    return 0;
}