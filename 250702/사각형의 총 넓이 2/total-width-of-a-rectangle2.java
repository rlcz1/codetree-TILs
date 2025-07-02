import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = 100;
        int n = sc.nextInt();
        int[] x1 = new int[n];
        int[] y1 = new int[n];
        int[] x2 = new int[n];
        int[] y2 = new int[n];
        for (int i = 0; i < n; i++) {
            x1[i] = sc.nextInt() + N;
            y1[i] = sc.nextInt() + N;
            x2[i] = sc.nextInt() + N;
            y2[i] = sc.nextInt() + N;
        }

        int[][] v = new int[N*2][N*2];
        for (int i = 0; i < n; i++) {
            for (int j = x1[i]; j < x2[i]; j++) {
                for (int k = y1[i]; k < y2[i]; k++) {
                    v[j][k] = 1;
                }
            }
        }

        int res = 0;
        for (int i = 0; i < v.length; i++) {
            for (int j = 0; j < v[i].length; j++) {
                if (v[i][j] == 1) res++;
            }
        }
        System.out.println(res);
    }
}
