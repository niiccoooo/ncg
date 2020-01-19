

public class Queue {
	private int nextFree;
	private int[] array;

	public Queue(int length) {
		nextFree = 0;
		array = new int[length];
	}

	public static void main(String[] args) {
		Queue queue = new Queue(5);
		for (int i = 0; i < queue.array.length; i++) {
			System.out.print(queue.array[i] + "  ");
		}
		System.out.println();
		queue.is_empty();
		queue.is_full();
		queue.enqueue(100);
		System.out.println("queue.enqueue(100)");
		queue.enqueue(50);
		System.out.println("queue.enqueue(50)");
		queue.enqueue(60);
		System.out.println("queue.enqueue(60)");
		queue.enqueue(150);
		System.out.println("queue.enqueue(150)");
		queue.enqueue(5);
		System.out.println("queue.enqueue(5)");
		for (int i = 0; i < queue.array.length; i++) {
			System.out.print(queue.array[i] + "  ");
		}
		System.out.println();
		queue.is_full();
		queue.dequeue();
		System.out.println("queue.dequeue()");
		queue.dequeue();
		System.out.println("queue.dequeue()");
		for (int i = 0; i < queue.array.length; i++) {
			System.out.print(queue.array[i] + "  ");
		}
	}

	public void dequeue() {	
		if(nextFree > 0) {
			for(int i = 0; i < array.length-1; i++) {
				array[i] = array[i+1];	
			}
			array[4] = 0;
		}
		nextFree--;
	}

	public void enqueue(int y) {
		if(nextFree < array.length) {
			array[nextFree] = y;
		}
		nextFree++;
	}

	public void is_full() {
		int n = 0;
		for (int i = 0; i < array.length; i++) {
			if(array[i] != 0) n++;
		}
		if (n == 5)
			System.out.println("The queue is full");
		else 
			System.out.println("The queue isn't full");
	}

	public void is_empty() {
		int n = 0;
		for(int i = 0; i < array.length; i++) {
			if(array[i] == 0) n++;
		}
		if (n == 5) 
			System.out.println("The queue is empty");
		else
			System.out.println("The queue is not empty");
	}
			
}
