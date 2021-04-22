muclasses : prelab13.o libuniversity.a
	gcc -std=c11 -g -Wall -Werror prelab13.o -luniversity -L. -o muclasses

prelab13.o : prelab13.c university.h
	gcc -std=c11 -g -Wall -Werror -c prelab13.c

clean:
	@rm -f *.o
	@rm -f muclasses
	@echo "All clean!"
