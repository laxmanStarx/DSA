#include<iostream>

using namespace std;


int firstOcc(int arr[], int key, int size){


    int ans = -1;

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<=end){



        if(  arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;


}



int lastOcc(int arr[], int key, int size){


    int ans = -1;

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<=end){



        if(  arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }

        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;


}


// int numberOccurrence(int arr, int key, int size){

//    int ans =  (firstOcc(arr, key, size) - lastOcc(arr, key, size) ) + 1

//     return (ans);
// }







int main(){
    int even[12] = {2,3,3,3,3,3,4,4,4,4,5,6};

     int ans =  (lastOcc(even, 3, 11) - firstOcc(even, 3, 11) ) + 1;

    // int odd[11] = {2,3,3,3,3,4,4,4,4,5,6};

    cout<<"The first Occurence of 4 is "<<firstOcc(even, 4, 11 )<<endl;
    cout<<"The last Occurence of 4 is "<<lastOcc(even, 4, 11 )<<endl;
      cout<<ans<<endl;

    return 0;
}