import java.util.Scanner;

public class Solution {

	public static void main(String[] args) {
		Scanner fs = new Scanner(System.in);
		int T = 1;
		T = fs.nextInt();
		for (int tc = 1; tc <= T; tc++) {
			int n = fs.nextInt();
			int[] a = new int[n];
			for (int i = 0; i < n; i++) {
				a[i] = fs.nextInt();
			}
			int odd = 0;
			for (int x : a) {
				if (x % 2 == 1) {
					odd++;
				}
			}
			//odd frequency must be even
			System.out.println((odd % 2 == 0) ? "YES" : "NO");
		}
		fs.close();
	}
}