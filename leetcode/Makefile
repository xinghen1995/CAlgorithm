.PHONY: all 

objs := $(LEET_DIR)/c001 $(LEET_DIR)/c002 $(LEET_DIR)/c003

all: $(objs);

$(LEET_DIR)/c001: c001.c
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(LEET_DIR)/c002: c002.c
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<

$(LEET_DIR)/c003: c003.c
	@mkdir -p $(@D)
	@echo LD ++ $@
	@$(CC) $(CFLAGS) -o $@ $<