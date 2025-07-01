import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        // Please write your code here.
        int days = (A - 11) * 24 * 60;
        int hours = (B - 11) * 60;
        int mins = (C - 11);

        int res = days + hours + mins;
        System.out.println(res);
    }
}