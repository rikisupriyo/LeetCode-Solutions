class Solution {

    public static int gcdEuclid(int a, int b) {
        if (b == 0) return a;
        return gcdEuclid(b, a%b);
    }

    public int findGCD(int[] nums) {
        Arrays.sort(nums);
        return gcdEuclid(nums[0], nums[nums.length-1]);
    }
}
