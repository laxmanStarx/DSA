

#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

 int medians(vector<int>& arr, int n)
{

    int result = 0;

    sort(arr.begin(), arr.end());


        if(n % 2!= 0){

            result = arr[(n +1)/2];
            
        }else if(n % 2 == 0){
            result = n/2;

        }

    
    return result;


}


int main(){

    vector<int> arr = {2,3,7,8,1,89,67};

    cout<<medians(arr , 7);

    


    return 0;
}
