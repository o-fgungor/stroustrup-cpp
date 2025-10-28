# Notes Chapter 09
maybe the most important chapter so far

## user defined types "UDT's"

### classes
```
```

``````
```cpp
class X {
public:
  int m;                                       // data member
  int mf(int v) {int old = m; m=v return old;} // function member
}
```

- class members are private by default
- struct's are classes where members are public by default
- 

### constructors
- member function with the same name as its class called `constructor`. 
- It will be used for initialization of objects of the class

### defining member functions
- using class_name::member_name notation
- member initializing atchieved with :y{yy}, m{mm} notation

Date::Date(int yy, int mm, int dd)
  :y{yy}, m{mm}, d{dd}
{
}

### Enumerations
- An enum (an enumeration) is a very simple user-defined type, specifying its set of values (its enumerators) as symbolic constants

```cpp
enum class Month{
  jan=1, feb=2, mar=3, apr=4, may=5, jun=6,
  jul=7, aug=8, sep=9, oct=10, nov=11, dec=11
};
```

```cpp
enum class Month{
  jan=1, feb, mar, apr, may, jun,
  jul, aug, sep, oct, nov, dec
};
```


- We can give specific value for an enumerator like above. If you leave compiler to pick the count starts with 0.

- We can call it with: `Month::jan`

- We cant assign int to a Month as 

```cpp
Month m = Month::feb;

Month m2 = feb; // error: fec is not in scope
m = 7;  // error: can't assign an int to a Month
int n = m;  // error: can't assign a Month to an int
```

- Month is a separate type from its "underlying type" int. To achieve that we should change the type to int with "int()"

- class enum came with C++11

#### "Plain" Enumerations
- also known `scoped enumerations` allows implicit conversions to int 

```cpp
enum Month {
 // note: no “class”
jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

Month m = feb; // OK: feb in scope
Month m2 = Month::feb; // also OK
m = 7; // error: can’t assign an int to a Month
```

- Their enumerators can "pollute" the scope in which their enumerator is defined

```cpp
enum Color { Red, Green };
enum TrafficLight { Green, Yellow }; // error: Green exists

int main() {
    int x = Red; // accessible 
}
```

### Operator Overloading
- You can define C++ operators for class or enumeration operands. 

- You can define just about any operator provided by C++ for your own types, but only existing operators, such as +, –, *, /, %, [ ], ( ), ^, !, &, <, <=, >, and >=
- You cannot define your own operators; you might like to have ** or $= as operators in your program, but C++ won’t let you. You can define operators only with their conventional number of operands; for example, you can define unary - , but not unary <=.

- An overloaded operator must have at least one user-defined type as operand:

```cpp
int opeartor+(int, int); // error: you can't overlaod built-in +
Vector operator+(const Vector&, int); // OK
```

-  Note that the most interesting operators to overload aren’t +, –, *, and / as people often assume, but =, ==, !=, <, [ ] (subscript), and ( ) (call).

### Default constructors

- Many classes have a notion of default value.

```cpp
string s1; // default value: the empty string " "
vector<string> v1; // default value: the empty vector; no elements
```

- For built-in types such as int and double its means 0 and understandable way. But for user-defined types that may not be the case, we could define default constuctor.

```cpp
Date::Date()
  :y{2001}, m{Month::jan}, d{1}
{
}
```

- Or instead of placing the default values for members in the constructor, we could place them on the members themselves:

```cpp
class Date{
public:
  //...
  Date();
  Date(iny y, Month m, int d);
  Date(int y);
  //...
private:
  int y {2001};
  Month m {Month::jan};
  
}
```

- Because Date(int) does not explicitly initialize month or the day, Month::jan and 1 are implicitly used. This calles in-class initializer.

















