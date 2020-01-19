import java.util.Scanner;

public class P4_2 {
	private static Scanner in;

	public static void main(String[] args) {
		in = new Scanner(System.in);
		System.out.printf("Bitte geben Sie n ein: ");
		long n = in.nextInt();
		System.out.printf("Bitte geben Sie m ein: ");
		long m = in.nextInt();
		System.out.print(ackermann(n, m));

	}

	public static long ackermann(long n, long m) {
		if (n == 0) { 
			return m + 1;
		}else if (m == 0) {
			return ackermann(n - 1, 1 );
		}else 
			return ackermann(n - 1, ackermann(n, m - 1));
	}
}
