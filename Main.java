
class Main {
    public static void main(String[] args) {
        // int n = 4;
        // for (int i = 1; i <= n; i++) {
        // for (int j = 1; j <= n; j++) {
        // System.out.print("*" + "\t");
        // }
        // System.out.println();

        // }
        // sum of all the elements in an array
        int nums[] = { 9, 7, 8, 4 };
        int n = nums.length;
        System.out.println(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        }
        System.out.println("Sum of all the numbers in the array:" + sum);

    }

}