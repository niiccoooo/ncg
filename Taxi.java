

public class Taxi {
	private String namefahrer;
	private String kennzeichen;
	private int nummer;

	public Taxi(String namefahrer, String kennzeichen, int nummer) {
		this.namefahrer = namefahrer;
		this.kennzeichen = kennzeichen;
		this.nummer = nummer;
	}

	public String getnamefahrer() {
		return namefahrer;
	}

	public String getkennzeichen() {
		return kennzeichen;
	}

	public int getnummer() {
		return nummer;
	}
}
