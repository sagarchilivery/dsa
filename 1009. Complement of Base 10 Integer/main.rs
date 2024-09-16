use std::io;

fn main() {
    let mut input = String::new();

    // Take user input
    println!("Enter a number:");

    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read input");

    // Try parsing the input to an integer
    let num: i32 = match input.trim().parse() {
        Ok(n) => n,
        Err(_) => {
            println!("Invalid input, please enter a valid number.");
            return;
        }
    };

    let mut mask: i32 = 0;
    let mut m: i32 = num;

    if num == 0 {
        println!("Ans -> {:?}", 1);
    }

    while m != 0 {
        mask = (mask << 1) | 1;
        m >>= 1;
    }

    println!("Ans -> {:?}", !num & mask);
}
