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


// declaring struct Rectangle
struct Rectangle {
    // lists struct variables and types
    width: u32,
    height: u32,
}

// impl block associates internal functions with Rectangle type
impl Rectangle {
    // references self because method can only be used by a rectangle anyways
    fn area(&self) -> u32 {
        self.width * self.height
    }

    fn can_hold(&self, other: &Rectangle) -> bool {
        self.width > other.width && self.height > other.height
    }
}

impl Rectangle {
    // function can share name with a variable within a struct
    fn width(&self) -> bool {
        self.width > 0
    }
}

fn main() {
    let rect1 = Rectangle {
        width: 40,
        height: 60,
    };
    let rect2 = Rectangle {
        width: 10,
        height: 40,
    };
    let rect3 = Rectangle {
        width: 60,
        height: 45,
    };

    println!("Can rect1 hold rect2? {}", rect1.can_hold(&rect2));
    println!("Can rect1 hold rect3? {}", rect1.can_hold(&rect3));

    println!(
        "The area of the rectangle is {} square pixels.",
        // uses method syntax instead of a function call
        rect1.area()
    );

    if rect1.width() {
       println!("The rectangle has a nonzero width; it is {}", rect1.width);
   }
}
