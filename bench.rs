use std::time::Instant;

fn fibonacci(n: u32) -> u32 {
    if n <= 1 {
        return n;
    }
    fibonacci(n - 1) + fibonacci(n - 2)
}

fn main() {
    let start = Instant::now();
    println!("Fibonacci(40) = {}", fibonacci(40));
    println!("Rust Execution Time: {:?}", start.elapsed());
}
