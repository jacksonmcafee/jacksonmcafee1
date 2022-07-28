use text_io::*;

enum Menu {
    Search,
    Modify,
    Error,
}

impl Menu {
    fn find_menu_from_str(input_str: &str) -> Menu {
        match input_str {
            "search" => Menu::Search,
            "modify" => Menu::Modify,
            _ => Menu::Error,
            }
        }
}

// use to_lowercase() to go from str -> String, th

fn main() {
    let temp_input: String = read!().to_lowercase();
    // let temp_input = temp_input.to_lowercase();
    let user_input = temp_input.as_str();
    let user_selection: Menu = Menu::find_menu_from_str(user_input);

    match user_selection {
    Menu::Search => println!("Search Menu"),
    Menu::Modify => println!("Modify Menu"),
    Menu::Error => println!("Error occured. Try again."),
    }
}
