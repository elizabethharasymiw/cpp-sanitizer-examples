# Show error using the Leak Sanitizer
target:
	clang -fsanitize=address -g main.c -o main
run: target
	./main
runlong: target
	ASAN_OPTIONS=detect_leaks=1 ./main

leakbuild:
	clang -fsanitize=leak -g main.c -o main

leakrun: leakbuild
	./main

# Show how the program would run without the sanitizer
nosanbuild:
	clang main.c -o main
nosanrun: nosanbuild
	./main

# cleanup
clean:
	rm main
	rm -r main.dSYM
