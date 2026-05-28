# C++ Singleton File Reader/Writer

A simple C++ project that demonstrates file reading and writing using the Singleton design pattern.

## Description

This project provides a basic example of file input and output in C++.  
It uses the **Singleton** design pattern to ensure that only one instance of the `FileReaderWriter` class exists throughout the program.

The class supports:
- Writing text to a file
- Reading text from a file

## Features

- Implemented in C++
- Uses the Singleton design pattern
- Simple file read/write operations
- Beginner-friendly example

## Code Overview

The `FileReaderWriter` class includes:

- `getInstance()`  
  Returns the single instance of the class

- `write(fileName, content)`  
  Writes content to a file

- `read(fileName)`  
  Reads content from a file

## Example Output
```cpp
Hello Coders!
```

## How It Works

1. The program gets the single instance of `FileReaderWriter`
2. It writes `"Hello Coders!"` into `testFile.txt`
3. It reads the content from the same file
4. It prints the result to the console

## Requirements

- C++ compiler
- Standard C++ library

## How to Run

1. Save the code in a `.cpp` file
2. Compile it using a C++ compiler:
```bash
g++ main.cpp -o app
