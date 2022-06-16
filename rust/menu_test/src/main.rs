use text_io::*;
use std::str::FromStr;

#[derive(Debug)]
pub enum Menu {
    Search,
    Modify,
}

impl FromStr for Menu {
    type Err = ();

    fn find_menu_from_str(input_str: &str) -> Menu {
        match input_str {
            "Search" => Menu::Search,
            "Modify" => Menu::Modify,
            _ => Err(()),
        }
    }
}

fn main() {
    
}

// menu function first
fn menu() -> Menu {
    println!("Welcome to the program!");
    println!("Type 'Search' to enter the search menu.");
    println!("Type 'Modify' to enter the modification menu.");

    let user_input: String = read!();
    let user_selection: Menu = find_menu_from_str(user_input);
    return user_selection
}
