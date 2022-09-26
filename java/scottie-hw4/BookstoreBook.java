public class BookstoreBook extends Book {
	// declare variables as private, no subclasses
	private float discount; 
	private float price;
	private boolean onSale;

	// declare book counter 
	static public int bsBookCount;

	// getter functions
	private float getDiscount() { return discount; } 
	private float getPrice() { return price; }
	private boolean getOnSale() { return onSale; }

	// setter functions
	private void setDiscount(float temp) { discount = temp; }
	private void setPrice(float temp) { price = temp; }
	private void setOnSale(boolean temp) { onSale = temp ; }

	// default constructor, used in current implementation
	// could be swapped for param with a tiny refactor in input method
	public BookstoreBook() {
		// do nothing at initalization
	}

	// param constructor
	public BookstoreBook(String author, String title, String isbn, float price, boolean onSale, float discount) { 
		this.author = author;
		this.title = title;
		this.isbn = isbn;
		this.price = price;
		this.onSale = onSale;
		this.discount = discount;
	}

	// copy constructor
	public BookstoreBook(BookstoreBook book) {
		this.author = book.author;
		this.title = book.title;
		this.isbn = book.isbn;
		this.price = book.price;
		this.onSale = book.onSale;
		this.discount = book.discount;
	}

	// toString override
	@Override
    public String toString() {
    	// could be one line but for clarity, it is split into two
    	String returnString = "[" + this.isbn + "-" + this.title.toUpperCase() + " by " + this.author.toUpperCase() + ",";
    	returnString += " $" + this.price + " listed for $" + (this.price * (1.0f - this.discount)) + "]";
        
        return returnString;
    }
}