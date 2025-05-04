
import java.util.*;

public class thirdmax {
    public static void main(String[] args) {
        int nums[] = { 21, 33, 12, 42, 6 };
        int n = nums.length;
        Arrays.sort(nums);
        int thirdMax = nums[n - 3];
        System.out.println("The third largest number:" + thirdMax);
        int Maxproduct = Math.max(nums[0] * nums[1] * nums[2], nums[n - 1] * nums[n - 2] * nums[n - 3]);
        System.out.println(Maxproduct);
    }
}
