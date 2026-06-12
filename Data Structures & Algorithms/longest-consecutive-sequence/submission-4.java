class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer> s=new HashSet<>(Arrays.stream(nums).boxed().toList());
        int ans=0;
        for(int x:nums){
if(!s.contains(x-1)){
int len=1;
while(s.contains(x+len)) len++;
ans=Math.max(ans,len);
}
        }
        return ans;
    }
}
