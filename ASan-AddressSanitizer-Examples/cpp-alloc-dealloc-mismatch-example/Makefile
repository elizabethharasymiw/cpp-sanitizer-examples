# Show error using the Address Sanitizer
target:
	clang++ -fsanitize=address -fno-omit-frame-pointer -O1 -g main.cpp -o main
	set ASAN_OPTIONS=alloc_dealloc_mismatch=1
run: target
	./main

# Show how the program would run without the sanitizer
nosanbuild:
	clang++ main.cpp -o main
nosanrun: nosanbuild
	./main

# cleanup
clean:
	rm main
	rm -r main.dSYM
