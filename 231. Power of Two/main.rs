use std::io;

fn main() {
    let mut inp = String::new();
    println!("Please Enter a number: ");

    io::stdin()
        .read_line(&mut inp)
        .expect("Failed to take input");

    let num: i32 = match inp.trim().parse() {
        Ok(n) => n,
        Err(_) => {
            println!("Invalid input, please enter a valid integer.");
            return;
        }
    };

    // let ans: i32 = 1;
    let mut flag: bool = false;

    for i in 0..31 {
        if 2_i32.pow(i) == num {
            flag = true;
            break;
        }
    }

    match flag {
        true => println!("Found"),
        false => println!("Not Found"),
    }
}
