
main = ./test/main.c
src = $(wildcard *.c)
obj = $(src:.c=.o)
dep = $(obj:.o=.d)  # one dependency file for each source

CC = gcc
FLAGS = -Wall -Werror -Wextra -pedantic -g




src = $(wildcard *.c)
obj = $(src:.c=.o)
dep = $(obj:.o=.d)  # one dependency file for each source

LDFLAGS = -lGL -lglut -lpng -lz -lm

exe: $(obj) $(main)
	$(CC)  $(FLAGS) -o $@ $^ 
	rm *.o *.d
	./$@
noFlags: $(obj) $(main)
	$(CC)  -g -o $@ $^ 
	rm *.o *.d
	./$@


-include $(dep)   # include all dep files in the makefile

# rule to generate a dep file by using the C preprocessor
# (see man cpp for details on the -MM and -MT options)
%.d: %.c 
	@$(CC) -g $< -MM -MT $(@:.d=.o) >$@
