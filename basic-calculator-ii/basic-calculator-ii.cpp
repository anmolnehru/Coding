class Solution {
public:
    void erase(vector<string> &tokens, int i) {
        tokens.erase(i - 1 + tokens.begin());
        tokens.erase(i - 1 + tokens.begin());
        tokens.erase(i - 1 + tokens.begin());
    }
    
    int calculate(string s) {
        s.erase (std::remove (s.begin(), s.end(), ' '), s.end()); 
        // tokenizwe
        vector<string> tokens;
        string operand;
        for (char c : s) {
            switch(c) {
                case '+':
                case '-':
                case '*':
                case '/':
                    tokens.push_back(operand);
                    operand.erase();
                    tokens.push_back({c});
                    break;
                default:
                    operand += c;
            }
        }
        tokens.push_back(operand);
        
        // process / and *
        for (int i = 0; i < tokens.size(); i++) {
            cout << tokens[i] << "]";
            if (tokens[i] == "/" or tokens[i] == "*")
            {
                int newop;
                if (tokens[i] == "*")
                    newop = stoi(tokens[i-1])*stoi(tokens[i+1]);
                else
                    newop = stoi(tokens[i-1])/stoi(tokens[i+1]);
                
                erase(tokens, i);
                tokens.insert(i-1+tokens.begin(), to_string(newop));
                i--;
            }      
        }
        
        int sum = stoi(tokens[0]);
         for (int i = 1; i < tokens.size()-1; i+=2) {
            if (tokens[i] == "+")
                sum+=stoi(tokens[i+1]);
             else
                 sum-=stoi(tokens[i+1]);
         }
        return sum;
    }
     
        /*
    int calculate1(string s) {
        // stack<char> stack;
        // '/'
         s.erase (std::remove (s.begin(), s.end(), ' '), s.end()); 

        int N = s.size();
        string s1;
        string s2;
        string s3;
        
        char *top;
        for (int ii = 0, idx =0; ii < s.size(); ii++, idx++) {
            if (s[ii] == '/') {
                int prev = (int)s[ii-1] - '0';
                int curr = (int)s[++ii] - '0';
                int val = prev/curr;
                s1.pop_back();
                s1+=to_string(val);
            } else {
                s1+=s[ii];
            }
        }
        
        for (int ii = 0, idx = 0; ii < s1.size(); ii++, idx++) {
            if (s1[ii] == '*') {
                // *top = s1[ii-1];
                s2.pop_back();
                
                int val = atoi(&s1[ii-1]) * atoi(&s1[++ii]);
                cout << val;
                s2+= to_string(val);
            } else {
                s2 += s1[ii];
            }
        }

        s3 = s2;
        cout << s3 <<endl;
        int sum = atoi(&s3[0]);
        for (int ii = 1; ii < s3.size();) {
            if (s3[ii] == '-') {
                sum-=atoi(&s3[ii+1]);
            } else if (s3[ii] == '+') {
               sum+=atoi(&s3[ii+1]); 
            }
            ii+=2;
        }
        return sum;
    }
    */
};