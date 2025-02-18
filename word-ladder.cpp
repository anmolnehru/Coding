#include <vector>
#include "unordered_set"
#include "queue"
using namespace std;

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        unordered_set<string> dic(wordList.begin(), wordList.end());
        unordered_set<string> visited;

        if (!dic.contains(endWord))
            return 0;

        queue<string> q;
        q.push(beginWord);
        q.push("$");

        uint count = 1;
        string& curr = q.front();;
        string bk;
        while(1) {
            if (q.front() == "$") {
                q.pop(); // next-real-ele
                if (q.empty()) // done no end-word
                    return 0;
                count++; // transformation
                q.push("$"); // demarcator
            } else {
                curr = q.front();
                q.pop();
                bk = curr;
                for (uint8_t i = 0; i < curr.size(); i++) {
                    for (char c  = 'a'; c <= 'z'; c++) {
                        curr[i] = c;
                        if (curr == endWord)
                            return count+1;
                        if (dic.contains(curr) && !visited.contains(curr)) {
                            q.push(curr);
                            visited.insert(curr);
                        }
                    }
                    curr = bk;
                }
            }
        }
        return 0;
    }
};
