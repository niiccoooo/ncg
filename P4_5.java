import java.util.Scanner;
import java.util.Locale;
import static java.lang.Math.*;

public class P4_5 {
	private static Scanner in;

	public static void main(String[] args) {
		Locale.setDefault(Locale.GERMANY);
		in = new Scanner(System.in);
		System.out.println("Programm zur Berechnung der Potenz");
		System.out.printf("Bitte geben Sie x ein: ");
		int x = in.nextInt();
		System.out.printf("Bitte geben Sie y ein: ");
		int y = in.nextInt();
		System.out.printf("Die Potenz von %d hoch %d ist %.2f.", x, y, pow(x, y));
	}
}
