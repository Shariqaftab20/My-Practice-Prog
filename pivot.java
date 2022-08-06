class Solution {
    public int pivotIndex(int[] nums) {
        int n = nums.length;
        int[] forwardSum = new int[n];
        int[] backwardSum = new int[n];
        
        forwardSum[0] = nums[0];
        backwardSum[n-1] = nums[n-1];
        
        for(int i = 1; i < n; i++)
        {
            forwardSum[i] = nums[i] + forwardSum[i-1];
        }
        
        for(int i = n-2; i>= 0; i--)
        {
            backwardSum[i] = nums[i] + backwardSum[i+1];
        }
        System.out.print(backwardSum);
        
        for(int i = 0; i < n; i++)
        {
            if(forwardSum[i] == backwardSum[i])
            {
                return i;
            }
        }
        
        return -1;
        
    }
    public static void main(String[] args)
    {
        int a[]={1,7,3,6,5,6};
        Solution c=new Solution();
        System.out.print(c.pivotIndex(a));
    }
}