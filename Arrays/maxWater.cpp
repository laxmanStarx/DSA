
#include<bits/stdc++.h>
using namespace std;



void maxWater(int height[], int n) { 
    int left = 0;
    int right = n - 1; 
    int maxArea = 0;

    while(left < right) {
        int area = min(height[left], height[right]) * (right - left); 
        maxArea = max(maxArea, area);

        if(height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    cout << "Max Area: " << maxArea << endl;
}

int main() {
    int height[9] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(height) / sizeof(height[0]); 
    
    maxWater(height, n);
    return 0;
}
