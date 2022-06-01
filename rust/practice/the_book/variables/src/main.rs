fn main() {
    // because x is declared as mutable, it can be overwritten
    let mut x = 5;
    println!("The value of x is: {}", x);
    // overwriting x (mutable)
    x = 6;
    println!("The value of x is: {}", x);

    // constants are declared in all capitals and underscores
    // separating the constant into constituent parts helps validate the
    // actual size that we are calculating (10800)
    const THREE_HOURS_SECS: u32 = 60 * 60 * 3;
    println!("There are {} seconds in three hours", THREE_HOURS_SECS);

    // assigns y as an immutable variable
    let y = 5;
    // shadows y as y + 1 (still immutable)
    // shadowing effectively creates a NEW variable instead
    // of using the old one
    let y = y + 1;

    {
        let y = y * 2;
        println!("The value of y in the inner scope is: {}", y);
    }

    println!("The value of y in the outer scope is: {}", y);
}
