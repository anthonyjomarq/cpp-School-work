# C++ Academic Portfolio

A curated collection of advanced C++ projects demonstrating object-oriented programming, data structures, algorithms, and template metaprogramming skills developed during computer science coursework.

## Repository Structure

```
├── Advanced-OOP-Projects/           # Advanced object-oriented programming projects
├── Data-Structures-and-Algorithms/  # Data structures and algorithm implementations
└── Template-Programming/            # Generic programming and templates
```

## Featured Projects

### Advanced Object-Oriented Programming

**Final-Project-SearchableVector**
- Custom vector implementation with template programming
- Binary search algorithm integration
- Inheritance from SimpleVector base class
- Demonstrates polymorphism and operator overloading

**Shape-Polymorphism-Hierarchy**
- Complete shape hierarchy with abstract base classes
- 2D shapes (Circle, Rectangle) and 3D shapes (Sphere, Cone, Cylinder)
- Virtual functions and polymorphic behavior
- Area and volume calculations

**Student-Information-System**
- Multi-class system integrating Student, Date, PhoneNumber, and StudentList classes
- Demonstrates composition and aggregation
- Custom string handling with MyString class
- Comprehensive data management

**Automobile-Inheritance-Hierarchy**
- Three-level inheritance: Automobile -> Car, Truck, SUV
- Demonstrates base class design and derived class specialization
- Virtual functions and polymorphism

**Course-Management-System**
- Complete course management with Instructor and TextBook classes
- Composition and association relationships
- Real-world application of OOP principles

**Exception-Handling-Demo**
- Exception throwing and catching with custom Car class
- Demonstrates proper error handling with try-catch blocks
- Use of 'this' pointer in exception contexts

**Operator Overloading Projects**
- **FeetInches-Operator-Overloading**: Custom measurement class with arithmetic operators
- **RationalNumber-Operator-Overloading**: Fraction arithmetic with complete operator set
- **RunningRaces-Operator-Overloading**: Race timing comparisons

**Employee-Hierarchy**
- Three-class inheritance chain: Employee -> ProductionWorker -> TeamLeader
- Demonstrates progressive specialization in OOP design

**Stock-Purchase-Tracker**
- Financial calculation system for stock transactions
- Demonstrates real-world business logic implementation

**Mortgage-Calculator**
- Financial application with complex calculations
- Object-oriented design for mortgage payment analysis

### Data Structures and Algorithms

**Linked-List-Implementation**
- Custom linked list data structure from scratch
- Insertion, deletion, and traversal operations
- Dynamic memory management

**Dealership-Management-System**
- Complex system managing Cars and Dealership inventory
- Multiple class integration
- Real-world data structure application

**Dynamic-Soccer-Statistics**
- Dynamic memory allocation for sports statistics
- Array manipulation and memory management
- Demonstrates proper use of new/delete

**Algorithms**
- **SearchableVector**: Binary search implementation
- **SortableVector**: Sorting algorithms
- **Linear Search**: Linear search with performance analysis
- **Merge Sort**: Divide-and-conquer sorting algorithm

**Advanced-Pointers-Lab**
- Pointer arithmetic and manipulation
- Pass-by-reference vs pass-by-value
- Memory address operations

**Dynamic-Memory-Management**
- Heap allocation and deallocation
- Memory leak prevention
- Pointer best practices

**Geometric-Shapes-Hierarchy**
- Circle, Cylinder, and Sphere class hierarchy
- Inheritance with geometric calculations
- Volume and surface area algorithms

### Template Programming

**SimpleVector-Implementation**
- Complete generic vector class using templates
- Type-independent container implementation
- Demonstrates template class design

**Generic-Box-Classes**
- Template-based box interface and implementations
- JewelryBox and PlainBox specialized templates
- Generic programming principles

## Technical Skills Demonstrated

### Object-Oriented Programming
- Class design and implementation
- Inheritance hierarchies (single and multiple levels)
- Polymorphism and virtual functions
- Operator overloading
- Exception handling
- Composition and aggregation
- Abstract classes and interfaces

### Data Structures
- Linked lists
- Dynamic arrays and vectors
- Custom container implementations
- Memory-efficient data organization

### Algorithms
- Binary search (O(log n))
- Linear search (O(n))
- Merge sort (O(n log n))
- Sorting and searching techniques

### Advanced C++ Features
- Template programming
- Generic classes and functions
- Dynamic memory management
- Pointer manipulation
- Copy constructors and assignment operators
- Destructors and RAII principles

### Software Engineering
- Multi-file projects with headers and implementation files
- Separation of interface and implementation
- Code organization and modularity
- Real-world application design

## Technologies

- **Language**: C++ (C++11/C++14 standards)
- **Compiler**: MSVC (Microsoft Visual C++)
- **IDE**: Visual Studio
- **Build System**: Visual Studio Projects

## Compilation

Most projects can be compiled with:

```bash
g++ -std=c++11 *.cpp -o program_name
```

Or open the `.sln` files in Visual Studio.

## Project Highlights

### Why These Projects Stand Out

1. **Real-world Applications**: Projects like the Dealership Management System and Student Information System demonstrate practical problem-solving

2. **Advanced OOP**: Deep understanding of inheritance, polymorphism, and design patterns

3. **Algorithm Implementation**: Hand-coded data structures and algorithms showing fundamental CS knowledge

4. **Template Mastery**: Generic programming demonstrating advanced C++ features

5. **Clean Code**: Well-structured, modular code following best practices

## Academic Context

These projects were completed as part of:
- **CECS 2222**: Object-Oriented Programming
- **CECS 2223**: Data Structures and Algorithms

Each project demonstrates progressive learning and mastery of increasingly complex concepts.

## Notes

- Build artifacts and IDE-specific files are excluded via .gitignore
- All projects are original academic work
- Code follows industry-standard practices for C++ development
