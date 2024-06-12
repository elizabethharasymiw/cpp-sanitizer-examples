# Show error using the Memory Sanitizer
target:
	clang++ -fsanitize=memory -fsanitize-memory-track-origins=2 -fno-omit-frame-pointer -O2 -g main.cpp -o main
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
