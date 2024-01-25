# Specifiy the target
all: song

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
song: Song.o
	g++ Song.o -o song

# Specify how the object files should be created from source files
Song.o: Song.cpp
	g++ -c Song.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o song
