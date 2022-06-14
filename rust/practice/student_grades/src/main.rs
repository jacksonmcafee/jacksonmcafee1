use crate::structures::Person;
use crate::structures::Course;
use crate::structures::Roles::Instructor;
use crate::structures::Roles::

mod structures;

fn main() {
    let jackson = Person {
        active: true,
        role: Instructor,
        first_name: String::from("Jackson"),
        last_name: String::from("McAfee"),
        grade_level: 11,
        id: 1001,
    };

    let enc1101 = Course {
        name: String::from("English 1"),
        instructor: jackson
    };

}
