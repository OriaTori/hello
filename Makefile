.PHONY: hello
hello: hello.cpp
	g++ hello.cpp -Wall -Wpedantic -o hello
.PHONY: clean
clean: 
	rm hello
