
# **Experiment 7**

## **Title:** Arrays and Strings in C++

---

##  **Aim**

To implement and understand the basic operations on arrays and strings in C++ such as traversal, searching, reversing, and manipulation using simple programs.

---

##  **Apparatus / Tools Required**

* Visual Studio Code (VS Code)
* OR any Online C++ Compiler (e.g., Replit, GDB, Coding Ninjas)

---

##  **Concept Overview**

###  **Arrays in C++**

* An **array** is a collection of elements of the same data type, stored at contiguous memory locations.
* Arrays allow random access using indices, making data manipulation efficient.

**Key Syntax:**

```cpp
int arr[5];                       // Declaration  
int arr[5] = {10, 20, 30, 40, 50}; // Initialization  
cout << arr[2];                  // Accessing 3rd element  
```

**Important Points:**

* Indexing starts from 0 (zero-based).
* Fixed size and homogeneous data type.
* Efficient for storing sequences like marks, IDs, etc.

---

###  **Strings in C++**

* A **string** is a sequence of characters used to store text.
* C++ provides the `string` class (from the `<string>` header) with useful built-in functions.

**Key Syntax:**

```cpp
string name;
cin >> name;              // Input (single word)
getline(cin, name);       // Input (entire line)
int length = name.length();   // Get string length
string full = s1 + s2;        // Concatenate strings
```

---

##  **Implemented Algorithms**

###  **For Arrays**

1. **Traversal**

   * Read values into an array.
   * Use a loop to print each element.

2. **Input/Output**

   * Input size and values.
   * Display using a `for` loop or range-based loop.

3. **Reversal**

   * Reverse elements manually or by using another array.

4. **Search**

   * Search for a given number.
   * Display the index if found (and optionally count occurrences).

---

###  **For Strings**

1. **Concatenation**

   * Combine two strings using the `+` operator.

2. **Palindrome Check**

   * Reverse the input string.
   * Compare it with the original to determine if it’s a palindrome.
---

## **Conclusion**

This experiment helped in strengthening our understanding of basic data handling using arrays and strings in C++.
By practicing key operations like traversal, reversal, and string manipulation, we gained hands-on experience with loop structures, conditionals, indexing, and use of standard libraries.
These are essential building blocks for tackling more complex topics like algorithms, data structures, and competitive programming.

