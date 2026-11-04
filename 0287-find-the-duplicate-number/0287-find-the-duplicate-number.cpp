class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Find the intersection point of the two runners in the cycle
        int slow = nums[0];
        int fast = nums[0];
        
        do {
            slow = nums[slow];          // Tortoise moves 1 step
            fast = nums[nums[fast]];    // Hare moves 2 steps
        } while (slow != fast);
        
        // Phase 2: Find the entrance to the cycle (the duplicate number)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];          // Both move 1 step now
            fast = nums[fast];
        }
        
        return slow;
    }
};