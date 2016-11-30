TARGET=prog
SOURCES=main.c lib.c
OBJS=$(SOURCES:.c=.o)

ifdef ENABLE_OVERRIDE
	CFLAGS += -DOVERRIDE_FOO
endif

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

clean:
	rm -f $(TARGET) *.o

.PHONY: clean
