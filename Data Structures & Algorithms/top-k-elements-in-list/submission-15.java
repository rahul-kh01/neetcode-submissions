class Solution {
    public int[] topKFrequent(int[] nums, int k) {
       //   priority_queue<pair<int,int>> pq;
       PriorityQueue<int[]> pq=new PriorityQueue<>((a,b)->b[0]-a[0]);

        //vector<int> ans;
    // List<Integer> ans=new ArrayList<>();
    int ans[]=new int[k];
        // unordered_map<int,int> mp;
        Map<Integer,Integer> mp=new HashMap<>();
        // for(int x:nums)
        // mp[x]++;
        for(int x:nums)
        mp.put(x,mp.getOrDefault(x,0)+1);
        // for(auto x:mp)

        // pq.push({x.second,x.first});
for(var e:mp.entrySet())
pq.offer(new int[]{e.getValue(),e.getKey()});
int i=0;
        while(k-->0){
            // ans.push_back(pq.top().second);
            // pq.pop();
            ans[i++]=pq.poll()[1];

        }

        return ans;
    }
}
