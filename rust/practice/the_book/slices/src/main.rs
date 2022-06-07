#![allow(unused)]
fn main() {
    let s = String::from("hello world");

    // referencing locations within the String s
    // range syntax would also allow you to
    /* let hello = &s[..5]; */

    let hello = &s[0..5];
    let world = &s[6..11];
    println!("You can break up {} into two strings!", s);
    println!("'{}' and '{}'", hello, world);
}

// using s: &str is better than s: &String because it allows
// the first_word function to deal with both &String and &str values
fn first_word(s: &str) -> &str {
    let bytes = s.as_bytes();

    for (i, &item) in bytes.iter().enumerate() {
        if item == b' ' {
            // returns a slice reference from 0 to the first space
            // equivalent to returning the first word in the string
            return &s[0..i];
        }
    }
    // returns a slice reference to the whole string
    &s[..]
}

/*
fn main() {
    let mut s = String::from("hello world");
    let word = first_word(&s);

    s.clear(); // error!
    // throws an error because word no longer references anything
    // if String s is cleared of values

    println!("the first word is: {}", word);
}
*/

/*
fn main() {
    let a = [1, 2, 3, 4, 5];

    // takes a slice of the array from [1..3]
    let slice = &a[1..3];

    // will return true because the slice and the reference are identical
    assert_eq!(slice, &[2, 3]);
}
*/
