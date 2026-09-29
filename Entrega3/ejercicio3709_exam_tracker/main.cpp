#include <vector>
#include <algorithm>

class ExamTracker {
private:
    std::vector<int> times;
    std::vector<long long> prefix;

public:
    ExamTracker() {
    }
    
    void record(int time, int score) {
        times.push_back(time);
        if (prefix.empty()) {
            prefix.push_back(score);
        } else {
            prefix.push_back(prefix.back() + score);
        }
    }
    
    long long totalScore(int startTime, int endTime) {
        auto it_low = std::lower_bound(times.begin(), times.end(), startTime);
        auto it_high = std::upper_bound(times.begin(), times.end(), endTime);
        
        if (it_low >= it_high) {
            return 0;
        }
        
        int l = std::distance(times.begin(), it_low);
        int r = std::distance(times.begin(), it_high) - 1;
        
        long long total = prefix[r];
        if (l > 0) {
            total -= prefix[l - 1];
        }
        
        return total;
    }
};
