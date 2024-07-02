# Show error using fsanitize 
target:
	clang -O3 -fsanitize=undefined main.c -o main
run: target
	./main

# Show that the program would run without fsanitize
nosan:
	clang main.c -o main
nosanrun: nosan
	./main

# cleanup
clean:
	rm main
