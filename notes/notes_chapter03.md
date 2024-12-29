# Notes Chapter 03

## Universal and Uniform Initialization
- C++11 introduced an initialization notation that outlaws narrowing conversions.

```c++
double x {2.7}; // OK
int y {x}; // error: double -> int might narrow

int a {1000}; // OK
char b {a}; // error: int -> char might narrow
```