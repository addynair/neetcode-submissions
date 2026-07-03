class Solution {
public:
    int calPoints(vector<string>& operations) {
        int ans  = 0;
        stack <int> st ; 
        int n = operations.size();
        for(int i = 0; i < n; i++){
            if(operations[i] == "+"){
                int first = st.top();
                st.pop();
                int second = st.top();
                int x = first + second;
                st.push(first);
                st.push(x);
                ans += x;
            }
            else if(operations[i] == "D"){
                int x = 2 * st.top();
                st.push(x);
                ans += x;
            }
            else if(operations[i] == "C"){
                int x = st.top();
                st.pop();
                ans -= x;
            
            }
            else {
                int x = stoi(operations[i]);
                st.push(x);
                ans += x;
            }
        }
        return ans;
    }

};