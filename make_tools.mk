MAKEFLAGS += --no-print-directory

TOOLDIRS := tools/aif2pcm tools/bin2c tools/gbafix tools/gbagfx tools/jsonproc tools/mapjson tools/mid2agb tools/preproc tools/ramscrgen tools/rsfont tools/scaninc

.PHONY: all $(TOOLDIRS)

TOOLDIRS := $(filter-out tools/agbcc tools/binutils tools/poryscript,$(wildcard tools/*))

all: $(TOOLDIRS)

$(TOOLDIRS):
	@$(MAKE) -C $@
