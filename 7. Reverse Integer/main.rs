fn main() {
    let mut num: i32 = 12238;
    let _sign: i8 = if num < 0 { -1 } else { 1 };
    let mut reverse_num: i32 = 0;
    num = num.abs();

    while num != 0 {
        let digit = num % 10;
        if num > ((i32::MAX - digit) / 10) {
            println!("THE END");
            break;
        }
        reverse_num = (reverse_num * 10) + digit;
        num /= 10;
    }

    println!("reverse ->{:?}", reverse_num * _sign as i32);
}
