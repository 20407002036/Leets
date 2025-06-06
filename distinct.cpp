#include <iostream>
#include <vector>
#include <algorithm>

bool NotAlike(std::vector<int>& a, std::vector<int>& b) {
    for (int x : a) {
        if (std::find(b.begin(), b.end(), x) == b.end()) return true;
    }
    for (int y : b) {
        if (std::find(a.begin(), a.end(), y) == a.end()) return true;
    }
    return false;
}

bool FindAlike(std::vector<int>& arr) {
    bool canbesplit = false;
    std::sort(arr.begin(), arr.end());
    std::vector<int> arr1;
    std::vector<int> arr2;

    for (int i = 0; i < arr.size(); ++i) {
        if (i % 2 == 0) arr1.push_back(arr[i]);
        else arr2.push_back(arr[i]);}   

    if (NotAlike(arr1, arr2)) canbesplit = true;

    return canbesplit;
}

int main() {
    std::vector<int> arr = {1, 1, 2, 2, 3, 4};
    bool Ans = FindAlike(arr);
    std::cout << "Can it be splitted? ;): " 
        << std::boolalpha << Ans << std::endl;
    return 0;
}
