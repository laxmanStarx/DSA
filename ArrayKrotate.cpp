#include <iostream>
#include <vector>
using namespace std;

void rotateclockwise(vector<int> &arr, int k) {
    if (k == 0) {
        return;
    }

    int n = arr.size();
    if (n == 0) return;

    // rotate array to the right by 1 position
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;

    // recursive call for remaining k-1 rotations
    rotateclockwise(arr, k - 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 2;

    rotateclockwise(arr, k);
    for (auto it : arr) {
        cout << it << " ";
    }

    return 0;
}