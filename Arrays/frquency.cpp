#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq;

    // Count frequency
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Print frequency
    for(auto it : freq) {
        cout << it.first << " -> " << it.second << endl;
    }

    return 0;
}