# Compiler and flags
CC = gcc

# Flex and Bison tools
LEX = flex
YACC = bison

# Output files
LEX_OUTPUT = src/lex.yy.c
YACC_OUTPUT = src/newparser.tab.c
YACC_HEADER = src/newparser.tab.h

# Source files
SRCS = src/main1.c $(LEX_OUTPUT) $(YACC_OUTPUT)
OBJS = $(SRCS:.c=.o)

# Target executable
TARGET = newparser

# Input and Output paths
INPUT_FILE = input_folder/main.tex
OUTPUT_MD = output_folder/output.md
LATEX_AST = output_folder/Latex_AST.txt
MARKDOWN_AST = output_folder/Markdown_AST.txt

# Default rule: compile everything
all: $(TARGET)

# Rule to generate the parser from Bison file
$(YACC_OUTPUT) $(YACC_HEADER): src/newparser.y
	$(YACC) -d -o $(YACC_OUTPUT) src/newparser.y

# Rule to generate the lexer from Flex file
$(LEX_OUTPUT): src/newsc.l
	$(LEX) -o $(LEX_OUTPUT) src/newsc.l

# Rule to compile the target program
$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS) -lfl -L/opt/homebrew/opt/flex/lib

# Rule to compile individual .c files into .o files
%.o: %.c src/newparser.tab.h
	$(CC) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET) $(LEX_OUTPUT) $(YACC_OUTPUT) $(YACC_HEADER)

# Run the program with the input file
run: $(TARGET)
	./$(TARGET) $(INPUT_FILE)

# Clean output files
clean_output:
	rm -f $(OUTPUT_MD) $(LATEX_AST) $(MARKDOWN_AST)

.PHONY: all clean run clean_output