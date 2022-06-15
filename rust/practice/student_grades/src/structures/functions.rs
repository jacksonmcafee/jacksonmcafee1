use text_io::*;

use crate::structures::*;
use crate::structures::Roles::*;

// Person functions
impl Person {
    pub fn add_student() -> Person {
        println!("Input fn, ln, gl, then id:");
        Person {
            active: true,
            role: Student,
            first_name: read!(),
            last_name: read!(),
            grade_level: read!(),
            id: read!(),
        }
    }
    pub fn add_instructor() -> Person {
        println!("Input fn, ln, gl, then id:");
        Person {
            active: true,
            role: Student,
            first_name: read!(),
            last_name: read!(),
            grade_level: read!(),
            id: read!(),
        }
    }
}

// Course functions



// TODO: Role-based functions
impl Roles {
    pub fn get_role(&self) -> String {
        match self {
            Student => String::from("Student"),
            Instructor => String::from("Instructor"),
            Admin => String::from("Admin"),
        }
    }
}
