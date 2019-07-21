CXX = clang++
CXXFLAGS = -std=c++14 -Wall -Wextra
OBJS=$(SRCS:.cc=.o)
SRCS=$(wildcard *.cc)

all: $(OBJS)

bouble_sort.o: bouble_sort.cc util.o
	$(CXX) $(CXXFLAGS) $^ -o $@

insert_sort.o: insert_sort.cc util.o
	$(CXX) $(CXXFLAGS) $^ -o $@

selection_sort.o: selection_sort.cc util.o
	$(CXX) $(CXXFLAGS) $^ -o $@

util.o: util.cc
	$(CXX) $(CXXFLAGS) $^ -o $@ -c

.PHONY: clean
clean: 
	$(RM) $(OBJS)

.PHONY: format
format:
	clang-format -i $(SRCS)
