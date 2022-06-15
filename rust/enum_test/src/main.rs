enum MyEnum {
    Good,
    Bad,
}

impl MyEnum {
    fn ret_string(&self) -> String {
        match self {
            Good => String::from("Good"),
            Bad => String::from("Bad"),
        }
    }
}

fn main() {
    let dave = MyEnum::Good;
    myFunction(dave);
}

fn myFunction(my_type: MyEnum) {
    let my_string = my_type.ret_string();
    println!("{}", my_string);
}
