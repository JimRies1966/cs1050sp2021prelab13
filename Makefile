muclasses : prelab13.o libuniversity.a
	compile prelab13.o -luniversity -L. -o muclasses

prelab13.o : prelab13.c university.h
	compile -c prelab13.c

clean:
	@rm -f *.o
	@rm -f muclasses
	@echo "All clean!"
