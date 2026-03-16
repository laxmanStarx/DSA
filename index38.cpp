#include <iostream>
#include <set>
#include <vector>

using namespace std;

// Fix 1: Corrected spelling and return condition
bool isPalindrome(int n) {
    int reversedNum = 0; // Use a clearer name
    int dummy = n;

    while (dummy > 0) {
        int rem = dummy % 10;
        // Check for potential overflow if using large numbers
        reversedNum = reversedNum * 10 + rem;
        dummy /= 10;
    }
    return n == reversedNum;
}

int getNoOfDigits(int n) {
    if (n == 0) return 1;
    int ans = 0;
    while (n > 0) {
        ans++;
        n /= 10;
    }
    return ans;
}

// Fix 2: Corrected logic for checking unique digits
bool isNotRepetative(int n) {
    int digitsCount = getNoOfDigits(n);
    set<int> st;
    int temp = n;
    while (temp > 0) {
        st.insert(temp % 10);
        temp /= 10;
    }
    // If set size matches digit count, all digits were unique
    return st.size() == digitsCount;
}

int main() {
    bool found = false;
    int l, r;
    
    if (!(cin >> l >> r)) return 0;

    for (int i = l; i <= r; i++) {
        // Condition: Divisible by 35 (7 * 5), NOT palindrome, UNIQUE digits
        if (i % 7 == 0 && i % 5 == 0 && !isPalindrome(i) && isNotRepetative(i)) {
            cout << i << " ";
            found = true; // Fix 3: Added missing '='
        }
    }

    if (!found) {
        cout << -1 << endl;
    }

    return 0;
}