# C++17 required for Pistache!
CCFLAGS = -O2 -std=c++17 -lpistache -I./include
SRC_DIR = ./src
OBJ_DIR = ./obj

## List of ./src files
SRCS := $(shell find $(SRC_DIR) -type f -name '*.cpp')

# Generate obj file names based on src file names
OBJS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Output binary
TARGET=server

all: $(TARGET)

$(TARGET): $(OBJS)
	g++ $^ $(CCFLAGS) -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	g++ -c $< $(CCFLAGS) -o $@

# Create the obj directory if not exist
$(OBJ_DIR):
    @mkdir -p $(dir $@)

clean: 
	rm -f $(TARGET)
	rm -rf $(OBJ_DIR)

# Run
run: $(TARGET)
	./$(TARGET)
