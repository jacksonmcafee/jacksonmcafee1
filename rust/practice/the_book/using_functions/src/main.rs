fn main() {
    another_function(5);
    print_labeled_measurement(5, 'h');

    let y = {
        let x = 3;
        // note that the following line doesn't have an ending
        // semicolon because it is an expression, NOT a statement
        // if it was a statement, it wouldn't return a value
        x + 1
    };
    print_param(y);
    let z = five();
    print_param(z);
}

fn print_param(x: i32) {
    println!("The passed variable is equal to {}", x);
}

// takes a signed int and returns a signed int
fn plus_one(x: i32) -> i32 {
    // note lack of ending semicolon
    x + 1
}

// functions that return a value must be specified in the function
// definition with an arrow operator
fn five() -> i32 {
    5
}
// note that the "return" keyword works but is not needed as long
// because most functions return the last expression implicitly

// when using a variable in a function parameter, you must specify
// the data type of the variable
fn another_function(x: i32) {
    println!("The value of x is: {}", x);
}

// if declaring multiple parameters, each parameter must
// have their type specified as follows
fn print_labeled_measurement(value: i32, unit_label: char) {
    println!("The measurement is: {}{}", value, unit_label);
}
