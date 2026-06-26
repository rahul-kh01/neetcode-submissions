class FreqStack {
    unordered_map<int, int> freq;
    unordered_map<int, vector<int>> stk;
    int maxFreq = 0;

public:
    void push(int x) {
        stk[++freq[x]].push_back(x);
        maxFreq = max(maxFreq, freq[x]);
    }

    int pop() {
        int x = stk[maxFreq].back();
        stk[maxFreq].pop_back();
        freq[x]--;
        if (stk[maxFreq].empty()) maxFreq--;
        return x;
    }
};