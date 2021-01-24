FLAGS = -o
all : driver

driver : driver.cpp message.cpp Message.h
	g++ $(FLAGS) driver driver.cpp message.cpp


run: driver
	./driver
	
clean:
	rm -f driver *.out
	

