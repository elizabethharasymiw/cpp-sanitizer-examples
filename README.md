# C/C++ Sanitizer Examples
C/C++ code examples that show how to use sanitizer tools.

## ASan == AddressSanitizer
```
clang++ -fsanitize=address main.cpp -o main
```
## LSan == LeakSanitizer
```
clang++ -fsanitize=leak main.cpp -o main
```
## MSan == MemorySanitizer
```
clang++ -fsanitize=memory main.cpp -o main
```
## UTSan == ThreadSanitizer
```
clang++ -fsanitize=thread main.cpp -o main
```
## UBSan == UndefinedBehaviorSanitizer
```
clang++ -fsanitize=undefined main.cpp -o main
```

## Useful flags when using sanitizer tools
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
