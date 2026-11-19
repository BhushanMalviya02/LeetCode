class Solution {
public:
    bool isValid(string s) {
        stack<int>st;


        int len = s.size();

        for(int i =0;i<len;i++){

            char ch = s[i];

            if(ch == '(' or ch == '{' or ch == '['){
                st.push(ch);
            }else{

                if(st.empty()){
                    return false;
                }

                char t = st.top();

                if(t == '(' and ch == ')'){
                    st.pop();
                }else if(t == '{' and ch == '}'){
                    st.pop();
                }else if(t == '[' and ch == ']'){
                    st.pop();
                }else{
                    return false;
                }

            }

            

            
        }

            if(!st.empty()){
                return false;
            }else{
                return true;
            }
    }
};