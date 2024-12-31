class Solution {
public:
    int getPivot(vector<int>& nums){
        int s = 0;
        int e = nums.size()-1;

        while(s < e){
            int mid = s + (e-s)/2;

             if(nums[mid] >= nums[0]){
                s = mid + 1;
             }
             else{
                e = mid;
             }   
        }
        return s;
    }

    int binarySearch(vector<int>& nums, int start , int end , int target){

        while( start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] < target){
                start = mid +1;
            }
            else{
                end = mid - 1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivot = getPivot(nums);

        if(target >= nums[pivot] && target <= nums[nums.size() - 1]){
            //second line
            return binarySearch(nums,pivot,nums.size() - 1,target);
        }
        else{
            return binarySearch(nums,0,pivot -1,target);
        }   
    }
};