import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m1 = sc.nextInt();
        int d1 = sc.nextInt();
        int m2 = sc.nextInt();
        int d2 = sc.nextInt();
        
        int[] days = new int[]{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        String[] weekDays = new String[]{"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

        int start = d1;
        for (int i = 0; i < m1; i++) {
            start += days[i];
        }
        int end = d2;
        for (int i = 0; i < m2; i++) {
            end += days[i];
        }

        int min = end - start;
        
        String res = weekDays[(min % 7 + 7) % 7];
        System.out.println(res);
    }
}