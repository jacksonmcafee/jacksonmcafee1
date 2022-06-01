fn main() {

    // floating-point numbers
    let x = 2.0; // f64 is the default
    let y: f32 = 3.0; // f32 must be declared

    println!("The value of x and y are {} and {}", x, y);

    // numeric operations
    let sum = 5 + 10;
    let difference = 103.4 - 93.4;
    let product = 12 * 12;
    let quotient = 53/2;

    println!("Sum = {}, Diff = {}, Prod = {}, Quo = {}", sum, difference, product, quotient);

    let floored = 2 / 3; // results in 0 because values are ints
    let remainder = 43 % 5;

    println!("Floored and remainder are {} and {}", floored, remainder);

    // booleans
    let t = true;
    let f: bool = false; // explicit type annotation

    println!("T is {} and F is {}", t, f);

    // characters
    let c = 'c'; // always use single quotation for chars
    let cap_c = 'C';

    println!("The value of c and cap_c are {} and {}", c, cap_c);

    // compound types (tuples and arrays)
    let tup: (i32, f64, u8) = (500, 6.4, 1); // tuple declared
        // to access members of a tuple use a pattern matching structure
        let (x, y, z) = tup;
        println!("The value of x is: {}", x);
        println!("The value is y is: {}", y);
        println!("The value is z is: {}", z);

        // you can also access by using the dot operator
        let five_hundred = tup.0;
        println!("The value is five_hundred is: {}", five_hundred);

    let arr = [1, 2, 3, 4]; // array declared
    let dupe_arr: [i32; 4] = arr;
}
