# Show error using the Thread Sanitizer
target:
	clang -fsanitize=thread -O1 -g main.c -o main
run: target
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
