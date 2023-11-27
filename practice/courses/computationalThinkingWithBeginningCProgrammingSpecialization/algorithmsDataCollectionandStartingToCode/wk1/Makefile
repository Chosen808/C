output: pbNJ.o sandwich.o 
	gcc pbNJ.o sandwich.o -o output 

pbNJ.o: pbNJ.c
	gcc -c pbNJ.c

sandwich.o: sandwich.c
	gcc -c sandwich.c

clean:
	rm -r *.o output