use text_io::*;

use crate::structures::*;
use crate::structures::Roles::*;
use crate::structures::Subject::*;

// Person functions
impl Person {
    pub fn add_person(enum_param: Roles) -> Person {
        println!("Input fn, ln, gl, then id:");
        Person {
            active: true,
            role: enum_param,
            first_name: read!(),
            last_name: read!(),
            grade_level: read!(),
            id: read!(),
        }
        // TODO make sure generated Person is added to
        // the .csv file after being generated
        // might just pass a bundled function?
    }
    pub fn del_person(person_param: Person) -> bool {
        //
        true
    }
}

// Course functions
impl Course {
    pub fn add_course(enum_param: Subject) -> Course {
        println!("Input cn and ");
        // need to verify if passed Person is
        // a valid instructor (both active & instructor)
        Course {
            name: read!(),
            // need to make read!() work with Person
            instructor: read!(),
        }
    }
}


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
