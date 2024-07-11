# Show error using the Address Sanitizer
target:
	clang -fsanitize=address -fno-omit-frame-pointer -O1 -g main.c -o main
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
