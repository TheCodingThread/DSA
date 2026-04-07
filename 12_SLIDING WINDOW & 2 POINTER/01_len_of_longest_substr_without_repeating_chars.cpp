#include <bits/stdc++.h>
using namespace std;

int lenOfLongestSubstrWoRepeatingChars(string s){
    int n = s.size();
    int HashLen = 256;
    int hash[HashLen];
    for (int i = 0; i < HashLen; ++i) hash[i] = -1;
    int l = 0, r = 0, maxLen = 0;
    while (r < n){
        if (hash[s[r]] != -1)
        l = max(hash[s[r]] + 1, l);
        int len = r - l + 1;
        maxLen = max(len, maxLen);
        hash[s[r]] = r;
        r++;
    }
    return maxLen;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;
    cout << lenOfLongestSubstrWoRepeatingChars(s);
    return 0;
}