#include <iostream>
#include <string>

using namespace std;

// void sumNumbersInString(string str) {
//     int totalSum = 0;
//     string tempNum = "";

//     for (int i = 0; i < str.length(); i++) {
//         // If the character is a digit, add it to our temporary number string
//         if (isdigit(str[i])) {
//             tempNum += str[i];
//         } 
//         // If it's NOT a digit, convert the collected tempNum and reset it
//         else {
//             if (!tempNum.empty()) {
//                 totalSum += stoi(tempNum);
//                 tempNum = ""; // Reset for the next number
//             }
//         }
//     }

//     // Final check to catch a number at the very end of the string
//     if (!tempNum.empty()) {
//         totalSum += stoi(tempNum);
//     }

//     cout << "Total Sum: " << totalSum << endl;
// }



int sumNumbers(string str) {
    int total = 0, num = 0;

    for (char c : str) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
        } else {
            total += num;
            num = 0;
        }
    }

    return total + num;
}

int main() {
    string str = "1abc 6 dgfg 5 23"; // Logic: 1 + 23 = 24
    cout<<sumNumbers(str);
    return 0;
}
