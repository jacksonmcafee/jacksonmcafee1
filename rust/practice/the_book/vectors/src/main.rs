fn main() {
    // to create new vector use Vec::new()
    let mut v: Vec<i32> = Vec::new();

    // push() adds elements to vector, must be
    // mutable in order to be able to
    v.push(2);

    // vec! macro creates a new vector
    let v2 = vec![1, 2, 3, 4];

    println!("{} is in the 2nd position in v2", v2[2]);
}
