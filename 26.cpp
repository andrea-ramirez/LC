class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        int size = 0;
        
        int slow = 0;
        int fast = 0;
        
        while(fast < nums.size()){
            if(!s.count(nums[slow])){
                s.insert(nums[slow]);
                slow++;
                size++;
                fast++;
            }else{

                while(fast < nums.size() && s.count(nums[fast])){
                    fast++;
                }
                
                if(fast >= nums.size()){
                    return size;
                }
                
                int temp = nums[slow];
                nums[slow] = nums[fast];
                nums[fast] = temp;
            }
        }
        
        return size;
        
    }
};
