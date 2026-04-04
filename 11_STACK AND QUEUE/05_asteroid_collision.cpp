#include<bits/stdc++.h>
using namespace std;

vector<int> asteroidsCollision(vector<int>& asteroids){
    int n = asteroids.size();
    vector<int> st;  
    for(int i=0; i < n; i++) {
        if(asteroids[i] > 0) st.push_back(asteroids[i]);
        else {
            while(!st.empty() && st.back() > 0 && st.back() < abs(asteroids[i])) st.pop_back();
                if(!st.empty() && st.back() == abs(asteroids[i])) st.pop_back();
                else if(st.empty() || st.back() < 0) st.push_back(asteroids[i]);
        }
    }
    return st;
}

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> asteroids(n);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        asteroids.push_back(a);
    }
    vector<int> result = asteroidsCollision(asteroids);
    for(auto i: result){
        cout << i << " ";
    }
    return 0;
}