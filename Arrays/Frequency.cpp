#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> checkfreq(vector<int>& arr)
{
    int n = arr.size();

    int maxFreq = INT_MIN;
    int minFreq = INT_MAX;

    int maxElement = -1;
    int minElement = -1;

    vector<bool> visited(n, false);
    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        if(visited[i]) continue;

        int count = 1;

        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }

        ans.push_back({arr[i], count});

        // update max
        if(count > maxFreq){
            maxFreq = count;
            maxElement = arr[i];
        }

        // update min
        if(count < minFreq){
            minFreq = count;
            minElement = arr[i];
        }
    }

    cout << "Max frequency element: " << maxElement << endl;
    cout << "Min frequency element: " << minElement << endl;

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<vector<int>> result = checkfreq(arr);

    for(auto num : result){
        cout << num[0] << " -> " << num[1] << endl;
    }

    return 0;
}