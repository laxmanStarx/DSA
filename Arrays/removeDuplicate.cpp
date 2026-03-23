#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {4, 2, 2, 1, 3, 4, 5};

    sort(arr.begin(), arr.end());

    int j = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }
}