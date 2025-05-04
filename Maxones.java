
public class Maxones {
    static int findMaxones(int[] arr) {
        int n = arr.length;
        int maxCount = 0, count = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] == arr[i - 1])
                count++;
            else {
                maxCount = Math.max(maxCount, count);
                count = 1;
            }
        }

        return Math.max(maxCount, count);
    }

    public static void main(String[] args) {
        int[] nums = { 1, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 };
        System.out.println(findMaxones(nums));
    }

}
