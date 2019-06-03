CXX = clang++
CXXFLAGS = -std=c++14 -Wall -Wextra
OBJS = bouble_sort.o insert_sort.o selection_sort.o

.PHONY: all
all: $(OBJS)

bouble_sort.o: bouble_sort.cc
	$(CXX) $(CXXFLAGS) $^ -o $@

insert_sort.o: insert_sort.cc
	$(CXX) $(CXXFLAGS) $^ -o $@

selection_sort.o: selection_sort.cc
	$(CXX) $(CXXFLAGS) $^ -o $@


.PHONY: clean
clean: 
	$(RM) *.o