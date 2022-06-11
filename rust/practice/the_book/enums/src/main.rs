fn main() {

    // using an enum is more concise than using a struct in this case because
    // we can put data into each enum variant
    enum IpAddr {
        // we can also differentiate the data we want stored in each enum
        // variant, unlike what we would need to do for a struct
        V4(u8, u8, u8, u8),
        V6(String),
    }

    let home = IpAddr::V4(127, 0, 0, 1);
    let loopback = IpAddr::V6(String::from("::1"));
}

// this enum stores multiple different data types similarly to a struct
// Quit stores nothing, Move and ChangeColor store sets of integers, and
// Write stores a string
enum Message {
    Quit,
    Move { x: i32, y: i32 },
    Write(String),
    ChangeColor(i32, i32, i32),
}

impl Message {
    // allows call method to be applied to all Message variants without
    // redeclaring the same method over 4 different structs
    fn call(&self) {
        // method body would be defined here
    }
}

/*
    let m = Message::Write(String::from("hello"));
    m.call();
*/


/*

This set of structs encompasses the same data that the enum above does.

struct QuitMessage; // unit struct
struct MoveMessage {
    x: i32,
    y: i32,
}
struct WriteMessage(String); // tuple struct
struct ChangeColorMessage(i32, i32, i32); // tuple struct
*/
