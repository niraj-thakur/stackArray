stackArray: stackArray.c Stack.o
	gcc stackArray.c Stack.o -o myApp
	
Stack.o: Stack.c Stack.h
	gcc -c Stack.c Stack.h
	
clean:
	rm *.o; rm *.exe;