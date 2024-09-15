// Example 1:

// Input: n = 234
// Output: 15
// Explanation:
// Product of digits = 2 * 3 * 4 = 24
// Sum of digits = 2 + 3 + 4 = 9
// Result = 24 - 9 = 15
// Example 2:

// Input: n = 4421
// Output: 21
// Explanation:
// Product of digits = 4 * 4 * 2 * 1 = 32
// Sum of digits = 4 + 4 + 2 + 1 = 11
// Result = 32 - 11 = 21

fn main() {
    let mut num: u32 = 123456789;
    let mut product: u32 = 1;
    let mut sum: u32 = 0;
    while num != 0 {
        let digit: u8 = (num % 10) as u8;
        product = product * digit as u32;
        sum = sum + digit as u32;
        num = num / 10
    }

    println!("Product     -> {:?}", product);
    println!("Sum         -> {:?}", sum);
    println!("Subtraction -> {:?}", product - sum);
}
