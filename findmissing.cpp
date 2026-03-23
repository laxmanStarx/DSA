#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {3, 0, 1};
    int n = arr.size();

    int expected = n * (n + 1) / 2;
    int actual = 0;

    for(int i = 0; i < n; i++) {
        actual += arr[i];
    }

    cout << "Missing number: " << expected - actual;

    return 0;
}