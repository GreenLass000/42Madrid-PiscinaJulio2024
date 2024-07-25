# Info message for make rebuild
CLEAR_MSG = "Program clean and recompiled"

# This will be the name of the executable file
NAME = rush-02

## This specify the path to diferent folders:
# Folder to source files (.c)
SRC_DIR = src
# Folder to build files (.o)
BUILD_DIR = build
# Folder to includes (.h)
INCLUDE_DIR = include

# This lists all files from the sources files folder
SRCS = $(wildcard $(SRC_DIR)/*.c)

# This lists all object files from source files 
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

## This are the comilator command and compilation options:
# This is the compilator command
CC = cc
# The flags used by Moulinette, and the header files
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DIR)

# ----- RULES ----- #
# Rule for the use of make without arguments, updates the executable file
all: $(NAME)

# This builds the executable file using the target as name, and all object
#	files (.o). This uses the CC compiler to link all object files and
#	generate the executable
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

# This rule defines how compile source files to object files,
#	it uses the cc command with flags to compile (-c) the source file ($<)
#	and generate object files ($@)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# This generates the build directory if it does not exist.
#	this is important because the build folder will save all object files
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# This generates a clean rule to remove all auto-generated build files and
#	the executable. To use, type the command 'make clean'
fclean:
	rm -rf $(BUILD_DIR) $(NAME)

# Executes the command make fclean for clean the current workspace and
#	recompiles everything with make
re: fclean all
	clear && echo $(CLEAR_MSG)

# Makes tests for an easy code
tests: re
	clear
	./$(NAME) "dicts/numbers.dict"

PHONY: all fclean re tests