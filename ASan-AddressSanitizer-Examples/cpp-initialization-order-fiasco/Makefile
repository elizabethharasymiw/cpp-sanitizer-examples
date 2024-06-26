# Show error using the Address Sanitizer
#
# This example has two builds that shows how output might change by the file
# order passed into the compiler.
#
# This is because the order in which constructors for global objects in
# different source files run is unspecified

help:
	# build1:  Build with main file passed to compiler first
	# build2:  Build with main file passed to compiler second
	# run1:  Run build1
	# run2:  Run build2
	# buildsan1:  Build example build1 with ASan
	# buildsan2:  Build example build2 with ASan
	# runsan1:  Run buildsan1
	# runsan2:  Run buildsan2
	# clean:  cleanup old builds from working directory

build1:
	clang++ main.cpp filetwo.cpp -o main
run1: build1
	./main

build2:
	clang++ filetwo.cpp main.cpp -o main
run2: build2
	./main

buildsan1:
	clang++ -fsanitize=address -O0 -g main.cpp filetwo.cpp -o main
runsan1: buildsan1
	ASAN_OPTIONS=check_initialization_order=true:strict_init_order=true ./main

buildsan2:
	clang++ -fsanitize=address -O0 -g filetwo.cpp main.cpp -o main
runsan2: buildsan2
	ASAN_OPTIONS=check_initialization_order=true:strict_init_order=true ./main

clean:
	rm main
	rm -r main.dSYM
