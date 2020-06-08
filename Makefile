.PHONY: all clean force

ROOT_DIR := $(shell pwd)
BUILD_DIR := $(ROOT_DIR)/build
BIN_DIR := $(BUILD_DIR)/bin
LIB_DIR := $(BUILD_DIR)/lib
LEET_DIR := $(BUILD_DIR)/leetcode
SUB_DIR := $(dir $(shell find . -maxdepth 2 -name "Makefile" | grep -v "\./Makefile" | sort))

CC := gcc
CFLAGS := -Wall -g

export CC CFLAGS BUILD_DIR BIN_DIR LIB_DIR LEET_DIR

all: $(SUB_DIR)

$(SUB_DIR): force;
	@make -C $@

force:;

clean:
	@rm -rf $(BUILD_DIR)