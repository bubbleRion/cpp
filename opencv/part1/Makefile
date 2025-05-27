CC = g++
CXXFLAGS = $(pkg-config --cflags --libs opencv4)
OBJS = a01_helloWorld.cpp

%.o: %.cc %.h
	$(CC) $(CXXFLAGS) -c $<

hello : $(OBJS)
	$(CC) -o hello $(CXXFLAGS)

.PHONY: clean
clean:
	rm -f $(OBJS) main

include main.d