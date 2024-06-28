# Show error using the Address Sanitizer
target:
	clang++ -fsanitize=address main.cpp -o main
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
