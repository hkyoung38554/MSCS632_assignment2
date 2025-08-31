# MSCS632 Assignment 2

This repo contains code for **Assignment 2: Syntax, Semantics, and Memory Management**.

---

## Part 1: Syntax and Semantics

### Section 1: Syntax Errors
These files include **intentional mistakes** to analyze how each language reports syntax errors.
- part1/py_sum.py: Python version with missing colon and undefined variable (o).
- part1/js_sum.js: JavaScript version with a broken function call identifier and missing brace.
- part1/cpp_sum.cpp: C++ version with undeclared identifier (o) and missing semicolon.

### Section 2: Closures, Scopes, and Semantic Differences
These files explore closures, scoping rules, and typing systems.
- part1/py_closure.py: Demonstrates Python closures and how default arguments fix late binding.
- part1/js_closure.js: Demonstrates JavaScript closures with let vs var.
- part1/cpp_closure.cpp: Demonstrates C++ lambdas with capture by value.

---

## Part 2: Memory Management

### Section 3: Dynamic Allocation and Memory Handling
These files demonstrate how different languages manage memory:
- part2/rs_memory.rs: Rust program showing ownership, borrowing, and automatic freeing at scope end.
- part2/JavaMemory.java: Java program allocating objects and showing garbage collection reclaiming memory.
- part2/cpp_memory.cpp: C++ program with both manual new/delete and safe RAII via unique_ptr.

---

## Report Notes
- Screenshots should show compilation or runtime error messages (for Section 1).
- Screenshots for Section 2 should show program output demonstrating closures.
- Screenshots for Section 3 should show successful execution and, where possible, memory profiling.

---

## Repository Layout
MSCS632_assignment2/
  part1/
    py_sum.py        # Python syntax error demo
    js_sum.js        # JavaScript syntax error demo
    cpp_sum.cpp      # C++ syntax error demo
    py_closure.py    # Python closure demo
    js_closure.js    # JavaScript closure demo
    cpp_closure.cpp  # C++ closure demo
  part2/
    rs_memory.rs     # Rust ownership and borrowing
    JavaMemory.java  # Java garbage collection
    cpp_memory.cpp   # C++ manual + RAII memory management
  README.md