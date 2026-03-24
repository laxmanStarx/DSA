#include<iostream>
#include<climits>
using namespace std;


int secondMax(int arr[], int n)
{

    if(n < 2){
        return n;
    }

    int max = arr[0];
    int second_max = INT_MIN;

    for(int i = 1; i< n; i++){
        
        if( max < arr[i]){
            second_max = max;
            max = arr[i];
        }
        else if( arr[i] > second_max && arr[i] != max)
        {
            second_max = arr[i];
        }
    }
    if(second_max == INT_MIN){
        return -1;
    }

    cout<< max<< endl;

  return (second_max);
}

int main ()
{

    int arr[6] = {78,89,65, 98, 560,6};

    cout<<secondMax(arr,6);

    return 0;
}