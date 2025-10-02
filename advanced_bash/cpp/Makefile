all: clean build run

build:
	g++ main.cpp -o myApp

run:
	./myApp 1> output.log 2> error.log

debug:
	./run.sh

advanced:
	./runAdvanced.sh

clean:
	rm -f myApp output.log error.log debug.log
