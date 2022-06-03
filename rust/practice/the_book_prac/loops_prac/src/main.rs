use std::io; // for io::stdin()

const SQRT_FIVE: f64 = 2.2360679775;
const BIGPHI: f64 = (1.0 + SQRT_FIVE)/2.0;
const SMALLPHI: f64 = (1.0 - SQRT_FIVE)/2.0;

fn main() {
    println!("Input 1 for Temp Conv or 2 for nth Fibonacci term.");
    // creates user_input string
    let mut user_input = String::new();
    // reads user_input from stdin
    io::stdin().read_line(&mut user_input).expect("Invalid input!");
    // trims and parses string user_input to u32 user_input
    let user_input: u32 = user_input.trim().parse().expect("Something failed.");

    if user_input == 1 {
        println!("Input your desired temperature to convert: ");
        let mut user_alt_input = String::new();
        io::stdin().read_line(&mut user_alt_input).expect("Invalid input!");
        let user_alt_input: i32 = user_alt_input.trim().parse().expect("Something failed.");
        temp_conv(user_alt_input);
    }
    else if user_input == 2 {
        println!("Input the nth fibonacci term you want: ");
        let mut user_alt_input = String::new();
        io::stdin().read_line(&mut user_alt_input).expect("Invalid input!");
        let user_alt_input: i32 = user_alt_input.trim().parse().expect("Something failed.");
        fibonacci(user_alt_input);
    }
}

fn temp_conv(x: i32) {
    println!("Input 1 for C -> F or 2 for F -> C.");
    let mut temp: f64 = x.into();

    let mut user_input = String::new();
    io::stdin()
    .read_line(&mut user_input)
    .expect("Invalid input!");

    let user_input: u32 = {
        user_input.trim()
        .parse()
        .expect("Something failed")
    };

    if user_input == 1 {
        // C -> F
        temp = (temp * 1.8) + 32.0;
        println!("The temperature is {}", temp);
    }
    else if user_input == 2 {
        // F -> C
        temp = (temp - 32.0) * (0.5556);
        println!("The temperature is {}", temp);
    }
}

// doesn't work to terms past like 70-80 because I'm an ape :D
fn fibonacci(x: i32) {
    let temp = {
        ((num::pow(BIGPHI, x.try_into().unwrap()) -
        num::pow(SMALLPHI, x.try_into().unwrap())) / SQRT_FIVE).floor()
    };
    println!("{}", temp);
}
