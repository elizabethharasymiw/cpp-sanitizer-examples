# Show error using the Address Sanitizer
#
# This example has two builds that shows how output might change by the file
# order passed into the compiler.
#
# This is because the order in which constructors for global objects in
# different source files run is unspecified

help:
	# buildgcc1:  GCC build with main file passed to compiler first
	# buildgcc2:  GCC build with main file passed to compiler second
	# rungcc1:  Run buildgcc1
	# rungcc2:  Run buildgcc2
	# buildclang1:  Clang build with main file passed to compiler first
	# buildclang2:  Clang build with main file passed to compiler second
	# runclang1:  Run buildclang1
	# runclang2:  Run buildclang2
	# buildsan1:  Build example buildclang1 with ASan
	# buildsan2:  Build example buildclang2 with ASan
	# runsan1:  Run buildsan1
	# runsan2:  Run buildsan2
	# clean:  cleanup old builds from working directory

buildgcc1:
	g++ main.cpp filetwo.cpp -o main
rungcc1: buildgcc1
	./main

buildgcc2:
	g++ filetwo.cpp main.cpp -o main
rungcc2: buildgcc2
	./main

buildclang1:
	clang++ main.cpp filetwo.cpp -o main
runclang1: buildclang1
	./main

buildclang2:
	clang++ filetwo.cpp main.cpp -o main
runclang2: buildclang2
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
