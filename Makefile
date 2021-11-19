default:
	gcc isalpha.c main.c -Wall -Wextra -Werror -o main
	./main.exe

sample:
	gcc isalpha.c main.c -o main