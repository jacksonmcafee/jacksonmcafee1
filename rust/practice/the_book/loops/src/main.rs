fn main() {
    let number = 6;

    // if statements must evaluate to a bool or they will fail
    if number % 4 == 0 {
        println!("number is divisible by 4");
    } else if number % 3 == 0 {
        println!("number is divisible by 3");
    } else if number % 2 == 0 {
        println!("number is divisible by 2");
    } else {
        println!("number is not divisible by 4, 3, or 2");
    }
    // else if statements can clutter your code so using
    // the "match" construct might be better in some cases

    let condition = true;
    let other_number = if condition { 5 } else { 6 };
    // let-if statements must use the same data type or else
    // the compiler will not know data type the variable
    // is meant to be at compile time

    println!("Other number is {}", other_number);

    loop_ex();
    loop_return_ex();
    while_ex();
    for_ex_1();
    for_ex_2();
}

// example showing how loop might be used
fn loop_ex() {
    let mut counter = 1;
    loop {
        // loop will run until the counter no longer satisfies
        // the if statement "counter < 11"
        if counter < 11 {
            println!("Counter is {}", counter);
            counter = counter + 1;
        }
        else {
        // when "counter < 11" is no longer true, the else
        // case occurs and breaks out of the loop
            break;
        }
    }
}

fn loop_return_ex() {
    let mut counter = 0;

    let result = loop {
        counter += 1;

        if counter == 10 {
            break counter * 2;
        }
    };

    println!("The result is {}", result);
}

fn while_ex() {
    let mut number = 3;

    while number != 0 {
        println!("{}!", number);

        number -= 1;
    }

    println!("LIFTOFF!!!");
}

fn for_ex_1() {
    let a = [10, 20, 30, 40, 50];
    let mut index = 0;

    while index < 5 {
        println!("the value is: {}", a[index]);

        index += 1;
    }
}

fn for_ex_2() {
    let a = [10, 20, 30, 40, 50];

    for element in a {
        println!("the value is: {}", element);
    }
}
