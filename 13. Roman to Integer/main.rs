use std::collections::HashMap;

fn main() {
    // let input: &str = "MCDLXXVI";
    // let input = ("MCDLXXVI").to_string();
    // let input: String = String::from("MCDLXXVI");
    let input: String = String::from("MCMXCIV");
    let mut total: i32 = 0;
    let mut prev: i32 = 0;

    let roman_map: HashMap<char, i32> = vec![
        ('I', 1),
        ('V', 5),
        ('X', 10),
        ('L', 50),
        ('C', 100),
        ('D', 500),
        ('M', 1000),
    ]
    .into_iter()
    .collect();

    for i in input.chars() {
        let value: i32 = *roman_map.get(&i).unwrap();

        if value > prev {
            total += value - 2 * prev;
        } else {
            total += value;
        }

        prev = value;
    }

    println!("{:?}", total);
}
