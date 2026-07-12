class Solution {
public:
    string decodeString(string s) {
        stack<int> countStack;
        stack<string> resStack;
        string res = "";
        int i = 0;
        
        while (i < s.length()) {
            if (isdigit(s[i])) {
                int count = 0;
                while (isdigit(s[i])) {
                    count = 10 * count + (s[i] - '0');
                    i++;
                }
                countStack.push(count);
            } else if (s[i] == '[') {
                resStack.push(res);
                res = "";
                i++;
            } else if (s[i] == ']') {
                string temp = resStack.top();
                resStack.pop();
                int repeatTimes = countStack.top();
                countStack.pop();
                for (int j = 0; j < repeatTimes; j++) {
                    temp += res;
                }
                res = temp;
                i++;
            } else {
                res += s[i++];
            }
        }
        return res;
    }
};
