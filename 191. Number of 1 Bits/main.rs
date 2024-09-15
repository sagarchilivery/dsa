// Approach 1 -> Brute force
fn main() {
    let mut num: u8 = 2;
    let mut count: u8 = 0;

    while num > 0 {
        if num % 2 == 1 {
            count = count + 1;
        }
        num >>= 1;
    }

    println!("Count -> {count:?}");
}
