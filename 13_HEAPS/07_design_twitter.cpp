//Problem: In this, we need to design a simplified version of Twitter where users can post tweets, follow/unfollow other users, and retrieve the 10 most recent tweets in their news feed. The news feed should include tweets from the user themselves and the users they follow.
//Solution: We can use an unordered map to store the followers of each user and a vector to store the tweets. When retrieving the news feed, we can iterate through the tweets in reverse order and check if the tweet was posted by the user or someone they follow.

#include<bits/stdc++.h>
using namespace std;

class Twitter{
    unordered_map<int, unordered_set<int>> friends; //we use set to avoid duplicates and for O(1) time complexity for insert and erase operations
    vector<pair<int, int>> posts;
public:
    Twitter(){}

    void postTweet(int userId, int tweetId){
        posts.push_back({userId, tweetId});
    }

    vector<int> getNewsFeed(int userId){
        vector<int> ans;
        int n = 0;
        for(int i=posts.size()-1; i>=0 && n<10; i--){
            if(posts[i].first == userId || friends[userId].count(posts[i].first)){ //count function returns 1 if the user is a friend, otherwise it returns 0
                ans.push_back(posts[i].second);
                n++;
            }
        }
        return ans;
    }

    void follow(int followerId, int followeeId){
        friends[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId){
        friends[followerId].erase(followeeId);
    }
};

int main(){
    Twitter tw;
    tw.postTweet(123, 98);
    tw.postTweet(123, 97);
    tw.postTweet(123, 96);
    tw.postTweet(124, 95);
    tw.postTweet(125, 94);
    tw.follow(123, 124);
    tw.follow(123, 125);
    tw.follow(124, 123);
    tw.unfollow(123, 125);
    vector<int> result = tw.getNewsFeed(123);
    for(auto i: result) cout << i << endl;
    return 0;
}