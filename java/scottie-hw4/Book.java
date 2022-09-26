import java.util.Scanner;

/*
It isn't necessary to use inheritance for this assignment, but
it is much cleaner than rewriting identical functions for two
different classes.

Also, I did not write error checking functions into the user responses
for book addition because no examples were provided showing that users might
provide such data. However, they were included for the creation and book type loops. 
*/

// Book is the superclass of BookstoreBook and LibraryBook
public class Book {
	// declare variables as protected, subclasses need access
	protected String author;
	protected String title;
	protected String isbn;

	// getter functions
	protected String getAuthor() { return author; }
	protected String getTitle() { return title; }
	protected String getISBN() { return isbn; }

	// setter functions
	protected void setAuthor(String temp) { author = temp; }
	protected void setTitle(String temp) { title = temp; }
	protected void setISBN(String temp) { isbn = temp; }

	// main declared within superclass
	public static void main(String[] args) {
		// initialize and open scanner object
		Scanner s = new Scanner(System.in);

		// create storage arrays for both types of books
		BookstoreBook[] bookStoreBookArr = new BookstoreBook[100];
		LibraryBook[] libraryBookArr = new LibraryBook[200];

		/*
		Some methodology explanation here. 
		I was deciding between using my default and my param constructors for the object creation loops 
		and I landed on param. Because the example output was given as asking for
		default book data FIRST and book type later, I had to store default book
		data somewhere and had no good reason not to use the param constructor.

		This could really easily be refactored to use the default constructors,
		but I just stuck with my original decision here.
		*/

		// create loop controlling booleans
		boolean bookCreationLoop = true;
		boolean bookTypeLoop = true;

		System.out.println("Welcome to the book program!");

		while (bookCreationLoop) {
			// resets booleans
			bookCreationLoop = true;
			bookTypeLoop = true;

			System.out.printf("Would you like to create a book object? (yes/no): ");	
			String ur_newBook = s.next().strip().toLowerCase();
			if (!ur_newBook.equals("no") && !ur_newBook.equals("yes")) {
				// error checking for invalid user input
				System.out.printf("I'm sorry, but %s isn't a valid answer. Please enter yes or no. %n", ur_newBook);
				continue;		
			}
			else {
				if (ur_newBook.equals("yes")) {
					// enter BB or LB loop
					System.out.printf("Please enter the author, title ad the isbn of the book seperated by /: ");
					s.nextLine();
					String ur_input = s.nextLine();

					// String.split() was throwing ArrayIndexOutOfBoundsException so this, 
					// while ugly, will have to do for now.

					int frontindex = ur_input.indexOf("/");
					String ur_author = ur_input.substring(0, frontindex).strip();

					int backindex = ur_input.lastIndexOf("/");
					String ur_title = ur_input.substring(frontindex+1, backindex).strip();

					String ur_isbn = ur_input.substring(backindex+1, ur_input.length()).strip();
					System.out.println("Got it!");
						
					while (bookTypeLoop) {
						System.out.printf("Now, tell me if it is a bookstore book or a library book (enter BB for bookstore book or LB for library book): ");
						String ur_bookType = s.next().toLowerCase();
							if (!ur_bookType.equals("lb") && !ur_bookType.equals("bb")) {
								// error checking for invalid user input
								System.out.printf("Oops! That’s not a valid entry. Please try again. %n");
								continue;		
							}
							else {
								System.out.println("Got it!");
								if (ur_bookType.equals("lb")) {
									// create new LibraryBook, print info
									LibraryBook libBook = new LibraryBook(ur_author, ur_title, ur_isbn);
									System.out.println("Here is your library book information.");
									System.out.println(libBook.toString());

									// store libBook in storage array
									libraryBookArr[LibraryBook.lbBookCount] = libBook;
									LibraryBook.lbBookCount++;
									bookTypeLoop = false;
								}
								else {
									System.out.printf("Please enter the list price of %s by %s: ", ur_title.toUpperCase(), ur_author.toUpperCase());
									float ur_price = s.nextFloat();
									System.out.println();
									
									System.out.printf("Is it on sale? (y/n): ");
									String ur_onSaleStr = s.next().toLowerCase();
									boolean ur_onSale = true;
									if (ur_onSaleStr.equals("n")) {
										ur_onSale = false;
									}
									System.out.println();

									System.out.printf("Deduction percentage: ");
									String ur_discountStr = s.next().toLowerCase();
									ur_discountStr = ur_discountStr.substring(0, ur_discountStr.length() - 1);
									float ur_discount = Float.parseFloat(ur_discountStr) / 100.0f;
									System.out.println("Got it!");

									// create new LibraryBook, print info
									BookstoreBook bsBook = new BookstoreBook(ur_author, ur_title, ur_isbn, ur_price, ur_onSale, ur_discount);
									System.out.println("Here is your bookstore book information.");
									System.out.println(bsBook.toString());

									// store libBook in storage array
									bookStoreBookArr[BookstoreBook.bsBookCount] = bsBook;
									BookstoreBook.bsBookCount++;

									bookTypeLoop = false;
								}
							}
					}
				}
				else {
					// break loop, print books
					System.out.println("Sure!");
					bookCreationLoop = false;
				}
			}
		}

		// print books
		System.out.printf("Library Books (%d)%n", LibraryBook.lbBookCount);
		for (int i = 0; i < LibraryBook.lbBookCount; i++) {
			System.out.println(libraryBookArr[i].toString());
		}

		System.out.println("-------");

		System.out.printf("Bookstore Books (%d)%n", BookstoreBook.bsBookCount);
		for (int i = 0; i < BookstoreBook.bsBookCount; i++) {
			System.out.println(bookStoreBookArr[i].toString());
		}

		System.out.println("-------");
		System.out.println();
		System.out.println("Take care now!");

	}
}