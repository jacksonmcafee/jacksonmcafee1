import java.util.Random;

public class LibraryBook extends Book {
	// declare book counter 
	static public int lbBookCount;

	private String callNum;

	// genCallNum generates call number in form xx.yyy.c
	private String genCallNum(String author, String isbn) {
		String callNum = randomFloor();
		callNum += "." + author.toUpperCase().substring(0, 3);
		callNum += "." + isbn.substring(isbn.length()-1, isbn.length());
		return callNum;
	}

	// helper to genCallNum that generates random floor
	private String randomFloor() {
		Random r = new Random();

		// generates random int from 1-99
		int floor = r.nextInt() % 99 + 1;
		String floorString = String.valueOf(floor);
		return floorString;
	}

	// default constructor, used in current implementation
	// could be swapped for param with a tiny refactor in input method
	public LibraryBook() {
		// do nothing at initalization
	}

	// param constructor
	public LibraryBook(String author, String title, String isbn) {
		this.author = author;
		this.title = title;
		this.isbn = isbn;
		this.callNum = genCallNum(this.author, this.isbn);
	}

	// copy constructor
	public LibraryBook(LibraryBook book) {
		this.author = book.author;
		this.title = book.title;
		this.isbn = book.isbn;
	}

	// toString override
	@Override
    public String toString() {
    	// could be one line but for clarity, it is split into two
    	String returnString = "[" + this.isbn + "-" + this.title.toUpperCase() + " by " + this.author.toUpperCase() + "-";
    	returnString += callNum + "]";
        
        return returnString;
    }
}