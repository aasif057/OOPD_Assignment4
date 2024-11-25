# Makefile for Publication Tracker

# Compiler
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

# Directories
SRC_DIR = src
BIN_DIR = bin

# Source files
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)

# Object files
OBJ_FILES = $(SRC_FILES:.cpp=.o)

# Executable
EXEC = $(BIN_DIR)/publication_tracker

# Targets
all: $(BIN_DIR) $(EXEC)

# Rule to create the bin directory
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(EXEC): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) $(OBJ_FILES) -o $@

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(BIN_DIR)/* $(OBJ_FILES)

.PHONY: all clean