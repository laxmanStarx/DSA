// #include<iostream>
// using namespace std;








// int main()
// {


//     int arr[6] = {2,4,4,2,6,7};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//     for(int i =0;i < n;i++){
//         if(arr[i] == arr[i+1]){
//             cout<<"Duplicate array  found"<< endl;
//         }else{
//             cout<< arr[i];
//             break;
//         }

//     }






//     return 0;
// }





// #include <iostream>
// #include <vector>
// #include <unordered_map>

// int findFirstNonRepeating(const std::vector<int>& arr) {
//     std::unordered_map<int, int> frequency;

//     // Step 1: Count frequency of each element
//     for (int num : arr) {
//         frequency[num]++;
//     }

//     // Step 2: Traverse array again to find the first element with frequency 1
//     for (int num : arr) {
//         if (frequency[num] == 1) {
//             return num;
//         }
//     }

//     return -1; // Return -1 if no non-repeating element exists
// }

// int main() {
//     std::vector<int> arr1 = {2,7,8,2,7,9,8};
//     std::cout << "Output: " << findFirstNonRepeating(arr1) << std::endl; // Output: 2

//     std::vector<int> arr2 = {9, 4, 9, 6, 7, 4};
//     std::cout << "Output: " << findFirstNonRepeating(arr2) << std::endl; // Output: 6

//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;

  

// int findUniqueArray(vector<int>& arr){
//        map<int , int> mp;


//     for(int num: arr){
//         mp[num]++;
//     }

//     for(int num: arr){
//        if( mp[num ] == 1){
//         return num;
//        }
//     }


//     return -1;
// }

// int main(){
//     vector<int> arr1 = {23,89,90,50,89,23,50};

//     cout<<"Find first non repeat term "<< findUniqueArray(arr1) <<endl;
//     vector<int> arr2 = {90,80,50,90,80,70,50};
//      cout<<"Find first non repeat term "<< findUniqueArray(arr2) <<endl;

// }


// #include<iostream>
// using namespace std;
// #include<vector>
// #include<map>

// int UniqueArray(vector<int>& arr){
//     map<int, int> map1;

//     for(int num : arr){
//         map1[num]++;
//     }
//     for(int num: arr){
//         if(map1[num] == 1)
//         return num;
//     }
//     return -1;


// }

// int main(){
//     vector<int> v1 = {40,80,90,50,80,40,90};
//     cout<<"Find first non repeat term "<< UniqueArray(v1)<< " ";

// }



#include <iostream>
using namespace std;

int findFirstNonRepeating(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int j;
        // Check if arr[i] exists anywhere else in the array
        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                break; // Duplicate found, move to the next i
            }
        }
        
        // If the inner loop finished without finding a duplicate
        if (j == n) {
            return arr[i];
        }
    }
    return -1; // If all elements repeat
}

int main() {
    int arr[] = {9, 4, 9, 6, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findFirstNonRepeating(arr, n);
    
    if (result != -1)
        cout << "First non-repeating element: " << result << endl;
    else
        cout << "No non-repeating element found." << endl;

    return 0;
}
