fn main() {
    let s = "hello"; // this string literal cannot be mutated
    let mut s_mutable = String::from("hello"); // this String can be mutated

    s_mutable.push_str(", world!"); // push_str() appends a literal to a String

    println!("{}", s_mutable); // This will print `hello, world!`
}

fn scope_example() {
    {
        // s is not valid here, it’s not yet declared
        let s = "hello";
        // s is valid from this point forward
        // do stuff with s
    }
    // this scope is now over, and s is no longer valid
}

/*
fn shallow_malloc_example() {
    let s1 = String::from("hello");
    let s2 = s1; // points s2 to s1's memory
    // this doesn't copy s1's data
    // instead it merely reassigns it

    println!("{}, world!", s1);
    // println fails because s1 has been moved to s2
}
*/

fn deep_malloc_example() {
    let s1 = String::from("hello");
    let s2 = s1.clone();
    // clone DEEP COPIES s1's data onto s2, creating
    // a second instance of that data on the heap

    println!("s1 = {}, s2 = {}", s1, s2);
}
