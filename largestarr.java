
public class largestarr {
    public static void main(String[] args) {
        int nums[] = { 9, 7, 8, 4 };
        int n = nums.length;
        int max = nums[0];
        for (int j = 0; j < n; j++) {
            if (nums[j] > max) {
                max = nums[j];
            }
        }
        System.out.println("largest number in an array:" + max);
    }
}
