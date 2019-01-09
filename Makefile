#include <stdio.h>



# store all our executables in a variable
# eventually this will look like:
#EXECUTABLES = hexdump keylogger passcheck
# but for now it's empty
EXECUTABLES = strings hexdump
# put all executables in `build` directory
TARGETS = $(patsubst %, build/%, $(EXECUTABLES))
# default make rule
# this rule is run when typing `make` by itself
all: $(TARGETS)
	
# eventually our `all` rule will look like this:
#all: hexdump keylogger passcheck
# anything in the build directory depends on the corresponding .c file
build/%: %.c #build folder prints with the corresponding c file
	@# make sure build directory exists
	@mkdir -p build
	gcc -g -o $@ $<

# deletes executables (`make clean`) //ran if u want to delete all your variables
clean: 
	rm -r build

    #make file doesnt accept spaces, it needs tabs so it works, makefile only uses tabs not spaces 