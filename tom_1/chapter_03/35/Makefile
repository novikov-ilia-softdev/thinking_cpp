CPP = g++
.SUFFIXES: .out .cpp
.cpp.out:
	$(CPP) $<
	
all: main
debug:
	$(CPP) -D DEBUG_ENABLE main.cpp -o main
clean:
	rm main