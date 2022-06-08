/*
this function calculates area using the area() func
defined below. the two issues are that there is not
an evident relation between width and height AND that
we are passing two separate parameters to area()

fn main() {
    let width1 = 80;
    let height1 = 80;

    println!(
        "The area of the rectangle is {} square pixels.",
        area(width1, height1)
    );
}

fn area(width: u32, height: u32) -> u32 {
    width * height
}
*/

/*
using tuples this time, the function becomes more concise
because we are combining the two variables into a single
tuple "rect1" and passing it to the area() function.
we now run into another issue because the two variables within
the tuple are now unlabeled.

fn main() {
    let rect1 = (30, 50);

    println!(
        "The area of the rectangle is {} square pixels.",
        area(rect1)
    );
}

fn area(dimensions: (u32, u32)) -> u32 {
    dimensions.0 * dimensions.1
}
*/

struct Rectangle {
    width: u32,
    height: u32,
}

fn main() {
    let rect1 = Rectangle {
        width: 40,
        height: 60,
    };

    println!(
        "The area of the rectangle is {} square pixels.",
        area(&rect1)
    );
}

fn area(rectangle: &Rectangle) -> u32 {
    rectangle.width * rectangle.height
}
