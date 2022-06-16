mod struct_functions;

pub struct Person {
    pub active: bool,
    pub role: Role,
    pub first_name: String,
    pub last_name: String,
    pub grade_level: u32,
    pub id: u32,
}

pub struct Course {
    pub name: String,
    pub instructor: Person,
}

pub enum Role {
    Student,
    Instructor,
    Admin,
}

pub enum Subject {
    Mathematics,
    Science,
    SocialStudies,
    EnglishLang,
    ForeignLang,
    FineArts,
    AppliedArts,
}
