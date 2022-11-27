#![allow(unused)]

use clap::{Arg, App};

fn main() {

    let matches = App::new("Solve My Equation!")
        .version("1.0")
        .author("Jackson McAfee")
        .about("A simple terminal-based algebra problem solver.")
        .arg(Arg::with_name("variable")
            .short('v')
            .long("solve-var")
            .takes_value(true)
            .help("Provide variable that needs to be solved.")
        )
        .arg(Arg::with_name("problem")
            .short('p')
            .long("problem")
            .takes_value(true)
            .help("Pass to solve the problem.")
        )
        .get_matches();

    let variable = matches.value_of("variable").unwrap();

    let problem_string = matches.value_of("problem");
    match problem_string {
        None => println!("No problem was provided."),
        Some(s) => {
            match s.parse::<String>() {
                Ok(_) => println!("The solution to your equation is {:?} = {}.", variable,
                solve_function(s).to_string()),
                Err(_) => println!("Error, no solution found."),
            }
        }
    }

}

