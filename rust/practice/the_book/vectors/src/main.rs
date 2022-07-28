fn main() {
    // to create new vector use Vec::new()
    let mut v: Vec<i32> = Vec::new();

    // push() adds elements to vector, must be
    // mutable in order to be able to
    v.push(2);

    // vec! macro creates a new vector
    let v2 = vec![1, 2, 3, 4, 5];

    println!("{} is in the 3rd position in v2", v2[2]);

    let third: &i32 = &v2[2];
    println!("{} is identical to the above value!", third);

    match v2.get(2) {
        Some(third) => println!("Third element is {}.", third);
        None => println!("There is not a third element of v2.");
    }
    

}
