/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    if(nums.length===1){
        return nums;
    }
    let i =0;
    let j =1;

    while(i<nums.length && j < nums.length){
        if(nums[i]===0 && nums[j]!==0){
            let temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j++;
        }
        else if(nums[i]===0 && nums[j]===0){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
};