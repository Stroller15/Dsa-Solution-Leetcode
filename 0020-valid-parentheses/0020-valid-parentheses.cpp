// class Solution {
// private:
//     bool isMatch(char top, char i) {
//         if(top == '(' && i == ')') return true;
//         else if(top == '{' && i == '}') return true;
//         else if(top == '[' && i == ']') return true;
//         else 
//             return false;
//     }

// public:
//     bool isValid(string s) {
//         stack<int> st;

//         for(int i = 0 ; i < s.size() ; i++) {
//             if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
//                 st.push(s[i]);
//             }
//             else {
//                 if(st.empty())  return false;
//                 if(isMatch(st.top(), s[i]) == false) return false;
//                 st.pop();

//             }
//         }
//         return st.empty();
//     }
// };

//  TC - O(N)  SC - O(N)


class Solution {
public:
    bool isValid(string s) {
        int top = -1;
        for(int i =0;i<s.length();++i){
            if(top<0 || !isMatch(s[top], s[i])){
                ++top;
                s[top] = s[i];
            }else{
                --top;
            }
        }
        return top == -1;
    }
    bool isMatch(char c1, char c2){
        if(c1 == '(' && c2 == ')') return true;
        if(c1 == '[' && c2 == ']') return true;
        if(c1 == '{' && c2 == '}') return true;
        return false;
    }
};

// TC - O(N)  SC - O(n)  without using space




























