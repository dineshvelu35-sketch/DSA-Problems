// CPP program to find minimum element to remove so no common element
// exist in both array

#include <bits/stdc++.h>
using namespace std;

// To find no elements to remove
// so no common element exist
int minRemove(vector<int>& arr1, vector<int>& arr2)
{
    // To store count of array elements
    unordered_map<int, int> countA, countB;

    // Count elements of arr1
    for (int i = 0; i < arr1.size(); i++)
        countA[arr1[i]]++;

    // Count elements of arr2
    for (int i = 0; i < arr2.size(); i++)
        countB[arr2[i]]++;

    // Traverse through all common elements, and
    // pick minimum occurrence from two arrays
    int res = 0;
    for (auto x : countA)
        if (countB.find(x.first) != countB.end())
            res += min(x.second, countB[x.first]);

    // To return count of minimum elements
    return res;
}

int main()
{
    vector<int> arr1 = { 1, 2, 3, 4 };
    vector<int> arr2 = { 2, 3, 4, 5, 8 };

    cout << minRemove(arr1, arr2);

    return 0;
}