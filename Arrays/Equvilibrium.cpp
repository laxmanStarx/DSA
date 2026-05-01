#include<iostream>

using namespace std;

bool equilibrium(int arr[], int n){
    int middleIndex = n/2;
    int sum = 0;
    int sum2 = 0;

for(int i = 0; i < middleIndex; i++){

    sum += arr[i];

}

for(int j = middleIndex + 1; j < n; j++){
    sum2 += arr[j];
}

if( sum == sum2){
    return true;
}

return false;

}

int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};

    if(equilibrium(arr , 7) == true){
        cout<<"it is equilibrium"<<endl;
    }else{
        cout<<"It is not an equilibrium"<<endl;
    }



    return 0;
}