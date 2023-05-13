class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long> s;
        for(auto token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
                if(!s.empty()) {
                    long long  ope2 = s.top() ; 
                    s.pop();

                    long long ope1 = s.top() ; 
                    s.pop();
                    
                    if(token == "+") {
                        s.push(ope1 + ope2);
                    }                   
                    if(token == "-") {
                        s.push(ope1 - ope2);
                    } 
                    if(token == "/") {
                        s.push(ope1 / ope2);
                    } 
                    if(token == "*") {
                        s.push(ope1 * ope2);
                    }                     
                }
            }
            else {
                int data = stoi(token);
                s.push(data);
            }
        }
        return s.top();
    }
};