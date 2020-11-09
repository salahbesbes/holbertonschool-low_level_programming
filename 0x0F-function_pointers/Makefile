
CC=gcc
TARGET=3-main.obj 3-op_functions.obj 3-get_op_func.obj
LIST=3-main.o 3-op_functions.o 3-get_op_func.o
CFLAGSS= -Wall
all: hello



#hello: 3-main.obj 3-get_op_func.obj 3-op_functions.obj
hello: $(TARGET)
	${CC} ${CFLAGSS} $(LIST) 3-calc.h -o hello




3-main.obj: 3-main.c
	${CC} ${CFLAGSS} -c 3-main.c

3-op_functions.obj: 3-op_functions.c
	${CC} ${CFLAGSS} -c 3-get_op_func.c

3-get_op_func.obj: 3-get_op_func.c
	${CC} ${CFLAGSS} -c 3-op_functions.c
