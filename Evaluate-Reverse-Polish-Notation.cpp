class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string& t: tokens)
        {
            if(t == "+" || t == "-" || t == "*" || t == "/")
            {
                int right = st.top();
                st.pop();
                int left = st.top();
                st.pop();
                int result = 0;

                if(t== "+")
                    result = left + right;
                else if( t == "-")
                    result = left - right;
                else if ( t== "*")
                    result = left * right;
                else
                    result = left/right;

                st.push(result);
            }
            else
                st.push(stoi(t));
        }
        return st.top();
    }
};
