class Solution {
  public:
    bool checkRedundancy(string &s) {
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];

            // PUSH everything except ')'
            if (ch != ')') {
                st.push(ch);
            }
            else {
                bool hasOperator = false;

                // POP till '('
                while (!st.empty() && st.top() != '(') {
                    char top = st.top();
                    st.pop();

                    if (top == '+' || top == '-' ||
                        top == '*' || top == '/') {
                        hasOperator = true;
                    }
                }

                // POP '('
                if (!st.empty())
                    st.pop();

                // No operator → redundant
                if (!hasOperator)
                    return true;
            }
        }
        return false;
    }
};
