#include<iostream>
using namespace std;


void rotate(int arr[],int start,int end ){

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end --;
    }



}

void rotatedArray(int arr[] , int n, int k){

    k= k%n;;

    // rotatedArray(rotate(arr, n), k);

     rotate(arr, 0,n-1);

    rotate(arr,0, k-1);
    rotate(arr,k,n-1);










       
};


int main()
{

    int arr[7] = {2,3,4,5,6,7,8};

    // rotate(arr,7);

    int k;
    cin>>k;

    rotatedArray(arr,7,k);

    for(int i =0; i<7;i++){
        cout<<arr[i];
    }







    return 0;
}