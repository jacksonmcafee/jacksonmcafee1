/*
Java program to reverse a string. Definitely room for improvement...
I wish I had stringstream...

However, that's my first Java program down!
*/

// TODO: Add punctuation and proper capitalization rules!

import java.util.Scanner;

public class StringReversal {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		// receive input string
		System.out.println("Input your string: ");
		String reverse_me = s.nextLine();

		// create reversed string & iterator 
		String me_reverse = ""; 
		int i = 0;

		// search through string until space or endline
		while (reverse_me.length() != 0) {
			int spaceIndex = 0;
			if (reverse_me.indexOf(" ") != -1) {
				spaceIndex = reverse_me.indexOf(" ");
			}
			else {
				spaceIndex = reverse_me.length() - 1;
			}

			String temp_substring = reverse_me.substring(0, spaceIndex+1);
			me_reverse = temp_substring + " " + me_reverse;
			temp_substring = reverse_me.substring(spaceIndex+1, reverse_me.length());
			// reverse_me.replaceFirst(temp_substring, "");
			reverse_me = temp_substring;
		} 
		me_reverse = me_reverse.replaceAll("  ", " ");
		System.out.println(me_reverse);
	}
}
