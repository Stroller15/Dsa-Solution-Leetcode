class Twitter {
public:
    Twitter() {
        
    }
    int time=0;
    map<int,priority_queue<pair<int,int>>> userTweet;
    map<int,set<int>> followCheck;
    void postTweet(int userId, int tweetId) {
        userTweet[userId].push({time++,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> temp;
        for(auto itr : followCheck[userId]){
            temp.push_back(itr);
        }
        
        temp.push_back(userId);
        priority_queue<pair<int,int>> pq;
        for(auto itr : temp){
            priority_queue<pair<int,int>> tempQueue= userTweet[itr];
            
            while(tempQueue.size()){
                pair<int,int> tt = tempQueue.top();
                tempQueue.pop();
                pq.push(tt);
            }
        }
        int size = 10;
        vector<int> ans;
        while(pq.size() && size--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        followCheck[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        if(followCheck[followerId].find(followeeId) != followCheck[followerId].end())
        {
            followCheck[followerId].erase(followCheck[followerId].find(followeeId));
        }
        
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */