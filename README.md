# simple-api-pi-tft-avatar
A silly project written in c++. Raspberry pi & tft display

//TEST

Docs:
https://howchoo.com/pi/raspberry-pi-touchscreen-setup/ => setup tft 7"
# C++17 required for Pistache!
/*CCFLAGS = -O2 -std=c++17 -lpistache
SRC_DIR = ./src
OBJ_DIR = ./obj

## List of ./src files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
SRCS += $(wildcard $(SRC_DIR)/*/*.cpp)

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
	mkdir -p $(OBJ_DIR)

clean: 
	rm -f $(TARGET)
	rm -rf $(OBJ_DIR)

# Run
run: $(TARGET)
	./$(TARGET)*/
