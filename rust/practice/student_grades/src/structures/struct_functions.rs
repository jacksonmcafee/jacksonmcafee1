use text_io::*;

use crate::structures::*;
use crate::structures::Role::*;
use crate::structures::Subject::*;

// Person functions
impl Person {
    pub fn add_person(enum_param: Role) -> Person {
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
    // pub fn add_course(enum_param: Subject) -> Course {
        // do something
    // }
}


// Role-based functions
impl Role {
    pub fn get_role_str(&self) -> String {
        match self {
            Student => String::from("Student"),
            Instructor => String::from("Instructor"),
            Admin => String::from("Admin"),
        }
    }
}

impl Subject {
    pub fn get_subj_str(&self) -> String {
        match self {
            Mathematics => String::from("Mathematics"),
            Science => String::from("Science"),
            SocialStudies => String::from("Social Studies"),
            EnglishLang => String::from("English Language"),
            ForeignLang => String::from("Foreign Language"),
            FineArts => String::from("Fine Arts"),
            AppliedArts => String::from("Applied Arts"),
        }
    }
}
