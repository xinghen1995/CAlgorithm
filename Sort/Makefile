.PHONY: all

objs := $(BIN_DIR)/InsertionSort

all: $(objs)

$(BIN_DIR)/InsertionSort: InsertionSort.c
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<