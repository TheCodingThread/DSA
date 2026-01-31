#include<bits/stdc++.h>
using namespace std;

int countEle(vector<int> v){
    int minNum = *min_element(v.begin(), v.end());
        int maxNum = *max_element(v.begin(), v.end());
        if(minNum == maxNum) return 0;
        int minCount = count(v.begin(), v.end(), minNum);
        int maxCount = count(v.begin(), v.end(), maxNum);
        return v.size() - minCount - maxCount;
}
//time complexity: O(n)

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    cout << countEle(v);
    return 0;
}