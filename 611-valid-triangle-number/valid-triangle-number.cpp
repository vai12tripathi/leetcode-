class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       
        int count = 0;
         int n = nums.size();
        
        for(int c = n-1; c>=2;c--){
            int a = 0;
            int b = c-1;
            while(a<b){
                if(nums[a]+nums[b]>nums[c]){
                count += (b-a);
                b--;}
                else {
                a++;}
            }
        }
        return count;
    }
};