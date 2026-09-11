class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        double reverse = 0;
         int t = x;
if (x<0)
return false;
        while(t>0){
            int digit =t % 10;
             reverse = reverse * 10 + digit;
            t = t/10;
        }

            if(reverse==original)
            return true;

            else
            return false;

        
        
    }   
};