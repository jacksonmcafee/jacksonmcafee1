// similar to "using namespace ___;"
// add io for input/output, rand::Rng for random number
use std::io;
use std::cmp::Ordering;
use rand::Rng;

fn main() {
    println!("Guess the number!");

    // generates a random number from 1-100 inclusive
    // .gen_range(1..=100) is equivalent to .gen_range(1..101)
    let secret_number = rand::thread_rng().gen_range(1..101);

    // loop continues until error is thrown or break statement
    loop {
        println!("Please input your guess.");

        // "let" creates a variable "guess"
        // variables default to constants when defined
        // use "mut" to make variables mutable
        let mut guess = String::new();

        // std::io:stdin()
        io::stdin()
            // read_line appends stdin to the string "guess"
            // "&mut guess" tells the fn what string we want used
            // & is used for references which are also immutable by default
            // therefore "&mut guess" is used instead of "&guess"
            .read_line(&mut guess)
            // expect is needed to respond to io::Result that is returned
            // by .read_line(), otherwise compiler will throw a warning
            // proper way to handle this is to add error handling, but
            // instead of that .expect() will crash the program safely
            .expect("Failed to read line");

    // all of the above is one line, it is the same as:
    // same as io::stdin().read_line(&mut guess).expect("Failed to read line");
    // easier to read if broken up into multiple lines

            let guess: u32 = match guess.trim().parse() {
                Ok(num) => num,
                Err(_) => continue,
            };
            // we are overwriting (shadowing) the "guess" variable declared earlier
            // now we don't need to create a new var that does the same thing as "guess"
            // .trim() will remove additional whitespace from the front and back of "guess"
            // .parse() will parse the string "guess" into a number "guess" (u32)
            // parse returns a Result value, which determines if the user's input is valid
            // or not, if valid it will continue to match cmp, else user needs a new input

        // {} act as placeholders for variables, instead of
        // cout << "The variable is " << var << endl;
        // you can simply add braces and list the variables at the end
        // of the expression
        println!("You guessed: {}", guess);

        // match is sort of like a switch case, it searches through
        // its "arms" to find a matching enum
        match guess.cmp(&secret_number) {
            // Ordering type is an enum, can be Less, Greater, or Equal
            // .cmp() can be used to compare any two values
            // it will return Ordering enum
            Ordering::Less => println!("Too small!"),
            Ordering::Greater => println!("Too big!"),
            // by defining additional break; function, program will
            // automatically end when reaching the Equal win condition
            Ordering::Equal =>  {
                println!("You win!");
                break;
            }
        }
    }
}
