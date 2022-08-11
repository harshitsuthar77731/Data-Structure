class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto x:s){
            if(x=='('||x=='{'||x=='[')
                st.push(x);
            else if(!st.empty()&&x==')'&&st.top()=='(')
                st.pop();
            else if(!st.empty()&&x=='}'&&st.top()=='{')
                st.pop();
            else if(!st.empty()&&x==']'&&st.top()=='[')
                st.pop();
            else 
                return false;
        }
        
        if(st.size()==0)
            return true;
        return false;
    }
};
