class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> st;
        for(auto &o:ops){
            if(o=="+") st.push_back(st[st.size()-1]+st[st.size()-2]);
            else if(o=="D") st.push_back(st.back()*2);
            else if (o=="C") st.pop_back();
            else st.push_back(stoi(o));
        }
        return accumulate(st.begin(),st.end(),0);
    }
};