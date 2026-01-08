/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
    let n = nums.length;

    for(let i =0;i<nums.length;i++){
        if(n === nums[i]){
            n=n-1;
            i=-1;
        }
        if(i === nums.length-1){
            return n;
        }
    }
};