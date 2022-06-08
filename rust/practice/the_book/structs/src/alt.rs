struct User {
    active: bool,
    username: &str,
    email: &str,
    sign_in_count: u64,
}

// in this example, the struct User has its username
// and email fields filled in with &str instead of String literals
// this creates a problem because it means that each new User
// object won't own the data it is storing

// the compiler will complain about needing lifetime specifiers
// which would allow the struct's data to be valid
// for as long as the struct itself is in scope
fn main() {
    let user1 = User {
        email: "someone@example.com",
        username: "someusername123",
        active: true,
        sign_in_count: 1,
    };
}
