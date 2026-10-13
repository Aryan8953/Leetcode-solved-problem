class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n,1);

        for(int i=1;i<n;i++){
            answer[i]=answer[i-1]*nums[i-1];
        }

        int rightProduct=1;
        for(int i=n-1;i>=0;i--){
            answer[i]*=rightProduct;
            rightProduct *=nums[i];
        }
        return answer; 
    }
};