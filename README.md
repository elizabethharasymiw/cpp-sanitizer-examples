# C++ Sanitizer Examples
C++ and C project examples that show how to use sanitizer tools

## How to use
- Note: These are meant to be examples of showing compiler behavior using sanitizer tools
- Note: Build System requires GNU Make
- Note: No Windows Examples yet
- Examples are sorted by: ``` SanitizerToolName/ExampleName ```
- Build Example: ``` make ```
- Run Example: ``` make run ```
- Build without sanitizer: ``` make nosanbuild ```
- Run without sanitizer: ``` make nosanrun ```

# Sanitizers used in this project and example calls
### ASan == AddressSanitizer
```
echo C++ clang build example
clang++ -fsanitize=address main.cpp -o main
```
```
echo C clang build example
clang -fsanitize=address main.c -o main
```


### LSan == LeakSanitizer
```
echo C++ clang build example
clang++ -fsanitize=leak main.cpp -o main
```
```
echo C clang build example
clang -fsanitize=leak main.c -o main
```


### MSan == MemorySanitizer
```
echo C++ clang build example
clang++ -fsanitize=memory main.cpp -o main
```
```
echo C clang build example
clang -fsanitize=memory main.c -o main
```


### TSan == ThreadSanitizer
```
echo C++ clang build example
clang++ -fsanitize=thread main.cpp -o main
```
```
echo C clang build example
clang -fsanitize=thread main.c -o main
```


### UBSan == UndefinedBehaviorSanitizer
```
echo C++ clang build example
clang++ -fsanitize=undefined main.cpp -o main
```
```
echo C clang build example
clang -fsanitize=undefined main.c -o main
```


## Useful flags when using these sanitizer tools
```
# Generate complete debug info
-g

# Instructs the compiler to not store stack frame pointers if the function does not need it
-fno-omit-frame-pointer

# Setting Optimization Level
-O0 == Optimization off
-O, -O1 == Low Optimization
-O2 == Medium Optimization
-O3 == High Optimization

# Enable origins tracking in MemorySanitizer
-fsanitize-memory-track-origins=<value>
```
