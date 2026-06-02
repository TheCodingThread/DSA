#include <iostream>
#include <vector>
#include <algorithm>

void countingSort(std::vector<int>& arr) {
    if (arr.empty()) return;

    int n = arr.size();
    int maxVal = *std::max_element(arr.begin(), arr.end());
    
    // Count array stores frequency of each element
    std::vector<int> count(maxVal + 1, 0);
    // Output array stores sorted elements
    std::vector<int> output(n);

    // Step 1: Count occurrences
    for (int num : arr) {
        count[num]++;
    }

    // Step 2: Calculate cumulative counts
    for (int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }

    // Step 3: Build the output array (iterate backwards for stability)
    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Step 4: Copy sorted elements back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

int main() {
    std::vector<int> data = {4, 2, 2, 8, 3, 3, 1};
    countingSort(data);
    
    std::cout << "Sorted array: ";
    for (int num : data) std::cout << num << " ";
    return 0;
}   