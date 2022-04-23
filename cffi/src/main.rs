extern "C" {
    fn c_hello();
    fn c_fib(n: u32) -> u32;
}

fn main() {
    println!("Hello, world from Rust!");
    unsafe {
        c_hello();
        println!("{} from c_fib", c_fib(45));
    }
}
