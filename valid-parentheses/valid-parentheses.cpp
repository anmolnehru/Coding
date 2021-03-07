class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        for (const char& c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if (stack.empty())
                    return false;
                char top = stack.top();
                if (top != c-2 && top != c-1)
                    return false;
                stack.pop();
            }
        }
        if (!stack.empty())
            return false;
        return true;
    }
};
    
    /*
                switch (c) {
                case '(' :
                    left1++;
                    break;
                case ')' :
                    left2++;
                    if (left2 > left1)
                        return false;
                    break;
                case '{' :
                    left3++;
                    break;
                case '}' :
                    left4++;
                    if (left4 > left3)
                    return false;
                    break;
                case '[' :
                    left5++;
                    break;
                case ']' :
                    left6++;
                    if (left6 > left5)
                    return false;
                    break;
                 default :
                    break;
                }
        
        }
        if (left1!=left2)
            return false;
        if (left3!=left4)
            return false;
        if (left5!=left6)
            return false;
        return true;
    */