use std::io; // for io::stdin

fn main() {
    println!("Input 1 for Temp Conv or 2 for nth Fibonacci term.");
    println!("Input your temp for temp conv or your nth Fibonacci term after.");
    // creates user_input string
    let mut user_input = String::new();
    // reads user_input from stdin
    io::stdin().read_line(&mut user_input).expect("Invalid input!");
    // trims and parses string user_input to u32 user_input
    let user_input: u32 = user_input.trim().parse().expect("Something failed.");

    if user_input == 1 {
        let mut user_alt_input = String::new();
        io::stdin().read_line(&mut user_alt_input).expect("Invalid input!");
        let user_alt_input: i32 = user_alt_input.trim().parse().expect("Something failed.");
        temp_conv(user_alt_input);
    }
    else if user_input == 2 {
        fibonacci();
    }
}

fn temp_conv(x: i32) {
    println!("Temp Conv!");
}

fn fibonacci() {
    println!("Fibonacci!");
}
