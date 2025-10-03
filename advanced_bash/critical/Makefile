all: clean build advanced

build:
	g++ main.cpp -o myApp

run:
	./myApp 1> output.log 2> error.log

debug: clean build
	./runTimedDebug.sh

advanced: clean build
	./runAdvanced.sh

zsh: clean build
	./runAdvanced.zsh

clean:
	rm -f myApp output.log error.log debug.log critical.log
