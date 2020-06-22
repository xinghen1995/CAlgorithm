.PHONY: all

objs := $(BIN_DIR)/insertionsort $(BIN_DIR)/quicksort $(BIN_DIR)/heapsort

LIB_CFLAG := -Wl,-rpath=$(LIB_DIR)

all: $(objs)

$(BIN_DIR)/insertionsort: insertionsort.c
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(BIN_DIR)/quicksort: quicksort.c
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $< -lmycutil -L$(LIB_DIR) $(LIB_CFLAG)

$(BIN_DIR)/heapsort: heapsort.c
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $< -lmycutil -L$(LIB_DIR) $(LIB_CFLAG)