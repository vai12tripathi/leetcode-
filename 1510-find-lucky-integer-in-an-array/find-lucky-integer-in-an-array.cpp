class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> count(501,0);
        for(int num : arr){
            count[num]++;
        }
        int ans = -1;
        for( int i=1;i<=500;i++){
            if(count[i] == i){
                ans = i;
            }
        }
        return ans;

        
    }
};