compile:c_task.c
	gcc -o c_task c_task.c -lm
run: c_task.o
	./c_task
clean:
	rm compile run c_task

