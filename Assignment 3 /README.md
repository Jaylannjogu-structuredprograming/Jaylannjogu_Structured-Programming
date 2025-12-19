  # Pointer concepts in C

## 1. Difference between a Normal Variable and a Pointer

### Normal Variable 
- Stores the value directl (e.g, an interger,float or char).
- Accessed using its name.
- 
* Example

 int x=10; // x stores the value 10

 ### Pointer
 -Stores a memory adress of another variable.
 -Accessed using the (*)operator 
 
 *Example 

 int x=10;
 int *p= &x; // p stores the adress of x

 -So the variable holds data directly while the pointer holds location of data in memory

 ## 2. Variable vs Pointer Declaration and Definition
 
 ### Variable Declaration/Defination 

 int a = 5; // 'a' is a variable storing the integer value 5

### Pointer Declaration/Defination

int *p;     // 'p' is a pointer to an integer
int a = 5;
p = &a;     // '&' gives the address of 'a'

### Operators
- & → Address-of operator (returns memory location).
- * → Dereference operator (accesses value at memory location).

## 3. Dereferencing a Pointer
- Meaning: Accessing or modifying the value stored at the memory address a pointer holds.
* Example:

int a = 10;
int *p = &a;     // p points to a
printf("%d\n", *p); // prints 10 (value at address)

*p = 20;         // modifies value at address
printf("%d\n", a); // prints 20

## 4. Scenarios Where Pointers Are Preferred

### Dynamic Memory Allocation
 Example: allocating arrays at runtime using malloc.
### Efficient Array and String Handling
 Pointers allow traversal and manipulation without copying large amounts of data.
### Function Arguments
 Passing large structures or arrays by reference avoids unnecessary copying.

 ## 5. Limitations and Risks of Pointers
 
- Dangling Pointers: Accessing memory after it has been freed.
- Memory Leaks: Forgetting to free dynamically allocated memory.
- Complexity: Harder to debug compared to normal variables.
- Security Risks: Improper pointer use can lead to crashes or vulnerabilities.

## 6. Call by Value vs Call by Reference

### Call by Value
- Function receives a copy of the variable.
- Changes inside the function do not affect the original.
 
* Example:
 
void func(int x) {
    x = 20;
}
int a = 10;
func(a);
// a remains 10

### call by Reference
- Function receives the address of the variable.
- Changes inside the function affect the original.
 
* Example

void func(int *x) {
    *x = 20;
}
int a = 10;
func(&a);
// a becomes 20

## 7. Practical Scenarios where: 

### Call by Value Preferred
- When you don’t want the original variable to be modified (e.g., passing constants).
- Useful for small data types like integers or floats.
### Call by Reference Preferred
- When working with large data structures (arrays, structs) to save memory and time.
- When you want the function to modify the original variable (e.g., updating a result).







 
