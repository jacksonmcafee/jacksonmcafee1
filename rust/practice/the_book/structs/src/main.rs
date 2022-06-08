struct User {
    active: bool,
    username: String,
    email: String,
    sign_in_count: u64,
}

// tuple struct example, works the same way as a normal struct
// but does not require the naming of fields
struct Point(i32, i32, i32); // see end of main for example

fn main() {
    // creates immutable User jax
    let jax = User {
        // assigning values
        email: String::from("jmm20g@my.fsu.edu"),
        username: String::from("jacksonm"),
        active: true,
        sign_in_count: 1,
    };
    // creates mutable User chris
    let mut chris = User {
        email: String::from("mcafee44@gmail.com"),
        username: String::from("chrism"),
        active: false,
        sign_in_count: 3,
    };

    // to edit individual values of chris,
    // use the dot operator
    chris.active = true;

    // uses struct update syntax to fill other data in from existing user jax
    let jax_alt = User {
        email: String::from("jacksonmcafee1@gmail.com"),
        // this assignment removes the functionality of User jax because
        // the data is moved from jax to jax_alt (except the email)
        ..jax
        // if we assign both email and username instead of just email
        // we can still use jax after this assignment because sign_in_count (int) and
        // active (bool) are both variables that carry the "Copy" trait while
        // email and username do not because they are String variables
        };

    // creates String objects to be used by build_user
    let ben_email = String::from("baseballben@yahoo.com");
    let ben_username = String::from("baseballben");

    // calling build_user
    let ben: User = build_user(ben_email, ben_username);

    // tuple struct assignment
    let origin = Point(0, 0, 0);
    println!("The location of the origin is at ({}, {}, {})", origin.0, origin.1, origin.2);
}

fn build_user(email: String, username: String) -> User {
    User {
        // variables fill in email/username
        // could simplify to "email," from "email: email,"
        // because the field name is identical to the variable
        email: email,
        username: username,
        // active and sign_in_count are given default values
        active: true,
        sign_in_count: 1,
    }
}
