use text_io::*;

pub enum Menu {
    Search,
    Modify,
}

// menu function first
pub fn menu() -> Menu {
    println!("Welcome to the program!");
    println!("Type 'Search' to enter the search menu.");
    println!("Type 'Modify' to enter the modification menu.");

    let user_input: String = read!();
    let user_selection: Menu = find_menu_from_str(user_input);
    return user_selection
}

fn find_menu_from_str(input_str: String) -> Menu {
    let string_search = String::from("Search");
    let string_modify = String::from("Modify");
    match input_str {
        string_search => Menu::Search,
        string_modify => Menu::Modify,
    }
}
