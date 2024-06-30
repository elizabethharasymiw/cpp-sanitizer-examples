# Show error using the Address Sanitizer
#
# This example has two builds that shows how output might change by the file
# order passed into the compiler.
#
# This is because the order in which constructors for global objects in
# different source files run is unspecified

help:
	# GCC Examples:
	# buildgcc1:  GCC build with main file passed to compiler first
	# buildgcc2:  GCC build with main file passed to compiler second
	# buildgccsan1:  Build example buildgcc1 with ASan
	# buildgccsan2:  Build example buildgcc2 with ASan
	# rungcc1:  Run buildgcc1
	# rungcc2:  Run buildgcc2
	# rungccsan1:  Run buildgccsan1
	# rungccsan2:  Run buildgccsan2
	#
	# Clang Examples:
	# buildclang1:  Clang build with main file passed to compiler first
	# buildclang2:  Clang build with main file passed to compiler second
	# buildclangsan1:  Build example buildclang1 with ASan
	# buildclangsan2:  Build example buildclang2 with ASan
	# runclang1:  Run buildclang1
	# runclang2:  Run buildclang2
	# runclangsan1:  Run buildclangsan1
	# runclangsan2:  Run buildclangsan2
	#
	# Misc Commands:
	# clean:  cleanup old builds from working directory

# Start of GCC Examples:
buildgcc1:
	g++ main.cpp filetwo.cpp -o main
rungcc1: buildgcc1
	./main

buildgcc2:
	g++ filetwo.cpp main.cpp -o main
rungcc2: buildgcc2
	./main

buildgccsan1:
	g++ -fsanitize=address -O0 -g main.cpp filetwo.cpp -o main
rungccsan1: buildgccsan1
	ASAN_OPTIONS=check_initialization_order=true:strict_init_order=true ./main

buildgccsan2:
	g++ -fsanitize=address -O0 -g filetwo.cpp main.cpp -o main
rungccsan2: buildgccsan2
	ASAN_OPTIONS=check_initialization_order=true:strict_init_order=true ./main

#Start of Clang Examples:
buildclang1:
	clang++ main.cpp filetwo.cpp -o main
runclang1: buildclang1
	./main

buildclang2:
	clang++ filetwo.cpp main.cpp -o main
runclang2: buildclang2
	./main

buildclangsan1:
	clang++ -fsanitize=address -O0 -g main.cpp filetwo.cpp -o main
runclangsan1: buildclangsan1
	ASAN_OPTIONS=check_initialization_order=true:strict_init_order=true ./main

buildclangsan2:
	clang++ -fsanitize=address -O0 -g filetwo.cpp main.cpp -o main
runclangsan2: buildclangsan2
	ASAN_OPTIONS=check_initialization_order=true:strict_init_order=true ./main

# Misc Commands:
clean:
	rm main
	rm -r main.dSYM
