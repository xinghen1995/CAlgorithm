.PHONY: all

objs := $(LIB_DIR)/libmycutil.so
src := print_array.c array_factory.c swap.c

all: $(objs)

$(objs): $(src)
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -fPIC -shared -o $@ $^