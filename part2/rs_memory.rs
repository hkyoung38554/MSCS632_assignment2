// file: rs_memory.rs
fn main() {
    let mut data = Vec::with_capacity(1_000_000);
    for i in 0..5 {
        data.push(i);
    }
    let view = &data;
    println!("len={} first={}", view.len(), view[0]);

    let boxed = Box::new(42);
    println!("boxed={}", boxed);

    let moved = boxed;
    println!("moved={}", moved);
    // println!("boxed={}", boxed); // would not compile
}
