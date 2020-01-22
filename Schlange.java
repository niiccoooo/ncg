

public class Schlange {
	private int nextFree;
	private Taxi[] array;

	public Schlange(int nextFree) {
		this.nextFree = nextFree;
		array = new Taxi[5];
	}

	public void dequeue() {
		Taxi a;
		if(nextFree > 0) {
			a = array[0];
			for(int i = 0; i < array.length; i++) {
				if(i < nextFree - 1) {
					array[i] = array[i+1];
				}else if(i == nextFree -1) {
					array[i] = null;
				}
			}
			nextFree--;
			System.out.println("Das Taxi: " + a.getkennzeichen() + " ist ausgefahren!");
		}else
		       System.out.println("Der Taxistand ist leer!");	
	}

	public void enqueue(Taxi y) {
		if(nextFree < array.length) {
			array[nextFree] = y;
			nextFree++;
		}else {
			System.out.println("Das Taxi: " + y.getkennzeichen() + " kann nicht einfahren!");
			System.out.println("Der Taxistand ist picke packe voll!");
		}
	}

	public boolean is_full() {
		int n = 0;
		for(int i = 0; i < array.length; i++) {
			if (array[i] != null) n++;
		}
		if(n == 5)
			return true;
		else
			return false;
	}

	public boolean is_empty() {
		int n = 0;
		for(int i = 0; i < array.length; i++) {
			if(array[i] == null) n++;
		}
		if(n == 5)
			return true;
		else	
			return false;
	}
	public void clear() {
		for(int i = 0; i < array.length; i++) {
			array[i] = null;
			nextFree = 0;
		}
	}

	public void ausgeben() {
		for(int i = 0; i < nextFree; i++) {
			System.out.print(array[i].getnamefahrer() +" " + array[i].getkennzeichen() + " " + array[i].getnummer());
			System.out.println();
		}
	}
}
