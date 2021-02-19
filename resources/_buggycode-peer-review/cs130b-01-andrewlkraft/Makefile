TARGET	:= buggy
SRC		:= $(wildcard *.cpp)
OBJ		:= $(SRC:%.cpp = %.o)

CXX			:= g++
CXXFLAGS	:= -Wall -03 --std=c++17

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(LDFLAGS) $^ -o $@

clean:
	rm $(TARGET)