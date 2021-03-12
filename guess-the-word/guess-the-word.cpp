/**
 * // This is the Master's API interface.
 * // You should not implement it, or speculate about its implementation
 * class Master {
 *   public:
 *     int guess(string word);
 * };
 */
class Solution {
public:
    
    int match(string a, string b) {
        int matches = 0;
        for (int i = 0; i < a.length(); ++i)
            if (a[i] == b[i])
                ++matches;
        return matches;
    }
    
    void findSecretWord(vector<string>& wordlist, Master& master) {
        for (int i = 0, x = 0; i < 10 , x < 6; ++i) {
            string guess = wordlist[rand() % (wordlist.size())];
            x = master.guess(guess);
            vector<string> wordlist2;
            for (string w : wordlist)
                if (match(guess, w) == x)
                    wordlist2.push_back(w);
            wordlist = wordlist2;
        }
    }
    
};