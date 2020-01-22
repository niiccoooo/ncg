

public class App {
	public static void main(String[] args) {
		Taxi t1 = new Taxi("Frank Viktor", "BN-FV 300", 1);
		Taxi t2 = new Taxi("Angela Merkel", "B - DE 001", 2);
		Taxi t3 = new Taxi("James Bond", "BN - JB 007", 3);
		Taxi t4 = new Taxi("Manuel Neuer","M - MMN 001", 4);
		Taxi t5 = new Taxi("Angelique Kerber", "BN - AK 111", 5);
		Taxi t6 = new Taxi("Boris Becker", "M - BB 4911", 6);
		Taxi t7 = new Taxi("Hyunga Bae", "HB - SG 5111", 7);
		Taxi t8 = new Taxi("Promi Z", "Z - 333", 8);
	
		Schlange taxistand = new Schlange(0);
	
		System.out.println("Ausgangssituation");
		taxistand.clear();
		taxistand.ausgeben();
	
		System.out.println("\n1. Situation\n");
		taxistand.clear();
		taxistand.enqueue(t1);
		taxistand.enqueue(t2);
		taxistand.enqueue(t3);
		taxistand.enqueue(t4);
		taxistand.enqueue(t5);
		taxistand.enqueue(t6);
		taxistand.ausgeben();
		System.out.println("\n2. Situation\n");
		taxistand.dequeue();
		taxistand.dequeue();
		taxistand.ausgeben();
	}
}
