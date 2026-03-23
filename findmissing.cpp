// #include <iostream>
// #include<vector>

// using namespace std;


// int main()
// {

//     vector<int> arr = {5,7,8};
//     int n = arr.size();
//     int expected = n*(n+1)/2;
//     int actual = 0;
//     for(int i = 0;i<n;i++){
//         actual +=arr[i];
//     }
//     int result =  expected - actual;
//     cout<<"Missing number would be: "<<result<<endl;



//     return 0;
// }




#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr) {
    int n = arr.size();

    int xor1 = 0, xor2 = 0;

    for(int i = 0; i <= n; i++) {
        xor1 ^= i;
    }

    for(int x : arr) {
        xor2 ^= x;
    }

    return xor1 ^ xor2;
}

int main() {
    vector<int> arr = {5, 6, 8};

    cout << "Missing number: " << findMissing(arr) << endl;

    return 0;
}