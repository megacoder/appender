# vim: ts=8 sw=8

CC	=gcc -mtune=native
OPT	=-Os
CFLAGS	=${OPT} -Wall -Werror -pedantic -g
LDFLAGS	=-g
LDLIBS	=

all::	appender

clean::
	${RM} a.out *.o core.* lint tags
	${RM} junk.txt

distclean clobber:: clean
	${RM} appender

check::	appender
	@touch junk.txt
	@echo "Before"
	@cat junk.txt
	./appender
	@echo "After"
	@cat junk.txt
