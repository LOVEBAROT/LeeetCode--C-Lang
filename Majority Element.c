int majorityElement(int* nums, int numsSize){
    int MajorityElement = 0,Res;
    for(int i  = 0;i < numsSize;i++)
    {
        if(MajorityElement == 0)
            Res = nums[i];
        if(Res == nums[i])
            MajorityElement++;
        else
            MajorityElement--;
        
    }
    return Res;
}