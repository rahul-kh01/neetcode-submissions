class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> res(n);
        for(int i=0;i<n;i++){
            long long val=1;
            for(int j=0;j<=i;j++){
                if(j) 
                val=val*(i-j+1)/j;
                res[i].push_back(val);
            }
        }
        return res;
    }
};