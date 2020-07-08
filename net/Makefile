.PHONY: all mkdir force

objs := $(BIN_DIR)/client01 $(BIN_DIR)/server01

all: mkdir $(objs)

mkdir: force
	@mkdir -p $(BIN_DIR)

force:;

$(BIN_DIR)/client01: client01.c
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^

$(BIN_DIR)/server01: server01.c
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $^