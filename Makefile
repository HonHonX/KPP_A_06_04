//-o output rename
//-c cut operation

Name = x

default: $(Name)

$(Name): $(Name).o
	gcc $(Name).o -o $(Name)
	
$(Name).o: $(Name).c
	gcc -c $(Name).c -o $(Name).o

clean:
	-rm -f $(Name).o
	-rm -f $(Name)
