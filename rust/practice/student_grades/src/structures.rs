mod struct_functions;

pub struct Person {
    pub active: bool,
    pub role: Roles,
    pub first_name: String,
    pub last_name: String,
    pub grade_level: u32,
    pub id: u32,
}

pub struct Course {
    pub name: String,
    pub instructor: Person,
}

pub enum Roles {
    Student,
    Instructor,
    Admin,
}

pub enum Subjects {
    Mathematics,
    Science,
    Social_Studies,
    English_Lang,
    Foreign_Lang,
    Fine_Arts,
    Applied_Arts,
}
