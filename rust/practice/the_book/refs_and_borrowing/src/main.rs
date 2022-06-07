fn main() {
    // assigns data to s1
    let s1 = String::from("hello");

    // assigns len the value s.len() without shadowing
    // the value of s1
    let len = calculate_length(&s1);

    println!("The length of '{}' is {}.", s1, len);

    let mut s = String::from("hello");
    println!("s contains {} before being mutated.", s);
    // passes a mutable string reference to function change
    change(&mut s);
    println!("s contains {} after being mutated.", s);
}

// function parameter requires s to be a String reference
// instead of a String literal which maintains s1's ownership
fn calculate_length(s: &String) -> usize {
    s.len()
    // after s goes out of scope, nothing happens to the &String
    // it was borrowing a value from because it doesn't have ownership
    // over that memory location
}

// function passes a mutable String reference
fn change(some_string: &mut String) {
    // doesn't fail because some_string was passed a mutable reference
    some_string.push_str(", world");
}

/*
// this code snippet would fail because r1 and r2 are receiving mutable
// references to the same variable and will therefore fail
// only one borrow is allowed per mutable variable

fn main() {
    let mut s = String::from("hello");

    let r1 = &mut s;
    let r2 = &mut s;

    println!("{}, {}", r1, r2);
}
*/


/*
// another fail because of the mutable and immutable references to the
// same variable s

fn main() {
    let mut s = String::from("hello");

    let r1 = &s; // no problem
    let r2 = &s; // no problem
    let r3 = &mut s; // BIG PROBLEM

    println!("{}, {}, and {}", r1, r2, r3);
}
*/



/*
// invalid code, attempts to change the value of a reference
// fails because the change function doesn't pass ownership of
// the string to some_string

fn main() {
    let s = String::from("hello");

    change(&s);
}

fn change(some_string: &String) {
    some_string.push_str(", world");
}
*/
