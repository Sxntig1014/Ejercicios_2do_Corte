#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>

class Twitter {
public:
    int tiempo;
    std::unordered_map<int, std::vector<std::pair<int, int>>> tweets;
    std::unordered_map<int, std::unordered_set<int>> seguidos;

    Twitter() {
        tiempo = 0;
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({tiempo, tweetId});
        tiempo++;
    }
    
    std::vector<int> getNewsFeed(int userId) {
        seguidos[userId].insert(userId);
        
        std::vector<std::pair<int, int>> listaTweets;
        
        for (int usuarioSeguido : seguidos[userId]) {
            for (auto t : tweets[usuarioSeguido]) {
                listaTweets.push_back(t);
            }
        }
        
        std::sort(listaTweets.begin(), listaTweets.end(), [](std::pair<int, int> a, std::pair<int, int> b) {
            return a.first > b.first;
        });
        
        std::vector<int> resultado;
        for (int i = 0; i < listaTweets.size() && i < 10; i++) {
            resultado.push_back(listaTweets[i].second);
        }
        
        return resultado;
    }
    
    void follow(int followerId, int followeeId) {
        seguidos[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            seguidos[followerId].erase(followeeId);
        }
    }
};
