main: src/main.cpp
	clang++ -Wall -std=c++23 src/main.cpp src/intro.cpp src/core.cpp -o calculator
