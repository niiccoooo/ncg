import java.util.Scanner;
import static java.lang.Math.*;

public class P4_4 {
	private static Scanner in;

	public static void main(String[] args) {
		in = new Scanner(System.in);
		System.out.println("Programm zur Berechnung der Potenz");
		System.out.printf("Bitte geben Sie x ein: ");
		int x = in.nextInt();
		System.out.printf("Bitte geben Sie y ein: ");
		int y = in.nextInt();
		System.out.printf("Die Potenz von %d hoch %d ist %.2f.", x, y, pow(x, y));
	}
}
