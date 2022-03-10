CXX = clang++
override CXXFLAGS += -g -Wno-everything

SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))

main: $(OBJS)
	$(CXX) $(CXXFLAGS) main.cpp -o main.out

clean:
	rm -f $(OBJS) main