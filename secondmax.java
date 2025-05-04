
import java.util.*;

public class secondmax {
    public static void main(String[] args) {
        int nums[] = { 9, 7, 8, 4 };
        int n = nums.length;

        // approach-1
        // Arrays.sort(nums);
        // int secondMax = nums[n - 2];
        // System.out.println("Second largest element in array:" + secondMax);

        // approach-2
        // int max = -1, secondMax = -1;
        // for (int i = 0; i < n; i++) {
        // if (nums[i] > max)
        // max = nums[i];
        // }
        // for (int i = 0; i < n; i++) {
        // if (nums[i] != max && nums[i] > secondMax)
        // secondMax = nums[i];
        // }

        // approach-3
        Arrays.sort(nums);
        int secondMax = -1;
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] != nums[n - 1]) {
                secondMax = nums[i];
                break;
            }
        }
        System.out.println("Second largest number:" + secondMax);
    }
}
