//Problem: Given a characters array tasks, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle.
//Solution: We can use a max heap (priority queue) to always execute the task with the highest frequency first. After executing a task, we decrease its frequency and if it still has remaining instances, we add it back to the heap. We also need to keep track of the time and ensure that we respect the cooldown period 'n' between two same tasks. If there are no tasks to execute, we can simply idle for that time unit. We repeat this process until all tasks are completed.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26, 0);
        for(char& ch : tasks) mp[ch-'A']++;

        int time = 0;
        priority_queue<int> pq;

        for(int i=0; i<26; i++){
            if(mp[i] > 0) pq.push(mp[i]);
        }

        while(!pq.empty()){
            vector<int> temp;
            for(int i=0; i<n+1; i++){
                if(!pq.empty()){
                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    temp.push_back(freq);
                }
            }
            for(int& f: temp){
                if(f>0) pq.push(f);
            }

            if(pq.empty()) time += temp.size();
            else time += n+1;
        }
        return time;
    }
};
//time complexity: O(T log A) where T is the number of tasks and A is the number of unique tasks (at most 26)
//space complexity: O(A)