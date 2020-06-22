.PHONY: all clean force

ROOT_DIR := $(shell pwd)
BUILD_DIR := $(ROOT_DIR)/build
INC_DIR := $(ROOT_DIR)/include
BIN_DIR := $(BUILD_DIR)/bin
LIB_DIR := $(BUILD_DIR)/lib
LEET_DIR := $(BUILD_DIR)/leetcode
UTIL_DIR := $(ROOT_DIR)/util
SUB_DIR := $(dir $(shell find . -maxdepth 2 -name "Makefile" | grep -v "\./Makefile" | grep -v "util" | sort))

CC := gcc
CFLAGS := -Wall -g -I$(INC_DIR)

export CC CFLAGS BUILD_DIR BIN_DIR LIB_DIR LEET_DIR INC_DIR

all: $(UTIL_DIR) $(SUB_DIR)

$(UTIL_DIR): force;
	@make -C $@

$(SUB_DIR): force;
	@make -C $@

force:;

clean:
	@rm -rf $(BUILD_DIR)