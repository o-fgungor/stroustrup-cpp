# Notes Chapter 04

## Type Conversions
In 4.3.3 Conversions, we can mix different types in expressions.

The rule (for the types that have been presented so far)
is that if an operator has an operand of type double, we use floating-point arithmetic yielding a double result; otherwise, we use integer arithmetic yielding an int result.

> - 5/2 is 2 (not 2.5)    
> - 2.5/2 means 2.5/double(2), that is, 1.25  
> - 'a'+1 means int{'a'}+1

The type{value} notation prevents narrowing (§3.9.2), but the type(value) notation does not. Once the result has been calculated, the compiler may have to convert it (again) to use it as an initializer or the right hand of an
assignment. For example:

```c++
double d = 2.5;
int i = 2;

double d2 = d/i; // d2 == 1.25
int i2 = d/i; // i2 == 1
int i3 {d/i}; // error: double -> int conversion may narrow

d2 = d/i; // d2 == 1.25
i2 = d/i; // i2 == 1
```

Beware that it is easy to forget about integer division in an expression that also contains floating-point operands. 

```c++
double dc;
cin >> dc;
double df = 9/5*dc+32; // beware!
```

corrected version;

```c++
double dc;
cin >> dc;
double df = 9.0/5*dc+32; // better
```

