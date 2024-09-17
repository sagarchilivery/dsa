use std::io;
use std::process::exit;

fn main() {
    let mut inp = String::new();
    io::stdin()
        .read_line(&mut inp)
        .expect("Failed to take input!");

    let num: i32 = match inp.trim().parse() {
        Ok(n) => n,
        Err(_) => return,
    };

    if num < 0 || (num >= 0 && num / 10 == 0) {
        println!("Not a palindrome");
        exit(0);
    }

    let mut temp: i32 = num;
    let mut digit: i32 = 0;
    let mut reverse: i32 = 0;

    while temp != 0 {
        if temp > i32::MAX / 10 || (temp < i32::MIN / 10 && digit > 7) {
            println!("Not a palindrome");
            break;
        }
        digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp /= 10;
    }

    println!("Num & rev -> {} {}", num, reverse);

    match num == reverse {
        true => {
            println!("It is a palindrome");
        }
        false => {
            println!("It is not a palindrome");
        }
    }
}
