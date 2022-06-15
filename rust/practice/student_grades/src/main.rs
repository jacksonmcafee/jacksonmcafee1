mod structures;

use crate::structures::*;
use crate::structures::Roles::*;

fn main() {


    // testing
    let jackson = Person {
        active: true,
        role: Instructor,
        first_name: String::from("Jackson"),
        last_name: String::from("McAfee"),
        grade_level: 11,
        id: 1001,
    };

    let dennis = Person {
        active: true,
        role: Instructor,
        first_name: String::from("Dennis"),
        last_name: String::from("Dustman"),
        grade_level: 12,
        id: 1002,
    };

    let enc1101 = Course {
        name: String::from("English 1"),
        instructor: jackson
    };

/*
    // gets until whitespace
    let course_name: String = read!();

    // getline
    let course_name: String = read!("{}\n");
*/
    let daniel: Person = Person::add_person(Student);
    println!("Added {} {} as {}.",
    daniel.first_name, daniel.last_name,
    daniel.role.get_role());

    let ethan: Person = Person::add_person(Instructor);
    println!("Added {} {} as {}.",
    ethan.first_name, ethan.last_name,
    ethan.role.get_role());
}
