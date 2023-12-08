obj-m := main.c
CC := gcc
Project := Task_2

run: compile
	./$(Project)

compile:
	$(CC) $(obj-m) -o $(Project) -lm

clean:
	rm $(Project)