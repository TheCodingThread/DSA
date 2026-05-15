//Problem: In this, we are given an array of integers and an integer k. We need to find the k most frequent elements in the array.
//Solution: We can use a frequency map to count the occurrences of each element, and then use a bucket sort approach to group elements by their frequencies.

#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> counts;
        
        for (int num : nums) {
            counts[num]++;
        }
        
        vector<vector<int>> buckets(n + 1); //vector size is n + 1 because max frequency can be n
        for (auto const& [num, freq] : counts) buckets[freq].push_back(num);
        
        vector<int> result;
        for (int i = n; i >= 0 && result.size() < k; i--) {
            if (!buckets[i].empty()) {
                for (int num : buckets[i]) {
                    result.push_back(num);
                    if (result.size() == k) return result;
                }
            }
        }
        return result;
    }
};
//time complexity: O(N); space complexity: O(N)