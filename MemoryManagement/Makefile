TARGET := $(notdir $(CURDIR))

CC := gcc

SRC_DIR := src
TEST_DIR := tests
EXT_DIR := external/munit

INCLUDES := -I$(SRC_DIR) -I$(EXT_DIR)

CFLAGS := -Wall -Wextra -std=c11 -O2 $(INCLUDES)

APP_SRC := $(SRC_DIR)/main.c $(SRC_DIR)/average.c

TEST_SRC := $(TEST_DIR)/test_average.c $(SRC_DIR)/average.c
MUNIT_SRC := $(EXT_DIR)/munit.c

APP := $(TARGET)
TEST_BIN := test_runner

all: $(APP)

$(APP): $(APP_SRC)
	$(CC) $(CFLAGS) -o $(APP) $(APP_SRC)

run: $(APP)
	./$(APP)

test: $(TEST_SRC) $(MUNIT_SRC)
	$(CC) $(CFLAGS) -o $(TEST_BIN) $(TEST_SRC) $(MUNIT_SRC)

test-run: test
	./$(TEST_BIN)

compile_commands:
	bear -- make clean
	bear -- make

clean:
	rm -f $(APP) $(TEST_BIN)

.PHONY: all run test test-run clean
