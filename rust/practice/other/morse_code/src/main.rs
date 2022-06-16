use text_io::*;
use phf::phf_map;

static A_TO_M_MAP: phf::Map<&'static str, &'static str> = phf_map! {
    "a" => ".-"
    };

const ALPHA_ARRAY: [char; 26] = 
    ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'];

const MORSE_ARRAY: [&str; 26] =
    [".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
    "..-", "...-", ".--", "-..-", "-.--", "--.."];

fn main() {
    // gets user input
    println!("Input your desired string to be translated: ");
    let user_string: String = read!("{}\n");
    let return_string: String = String::from("");

    // need to slice user_string to search  
    let example_str = A_TO_M_MAP.get("a"); 
    println!("{}", example_str);    
}





