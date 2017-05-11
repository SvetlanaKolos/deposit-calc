CC = gcc
CFLAGS = -I thirdparty -I src -c -Wall -Werror
EXECUTABLE = file 
SOURCES = main.c deposit.c 
DIR = build/src
DAR = src
DUR = bin

EXECUTABLE_TEST = testik
SOURCES_TEST = deposit_test.c main.c validation_test.c
DIT = build/test
DAT = test
DUT = bin

all: $(DUR)/$(EXECUTABLE) Testpr
$(DIR)/main.o: $(DAR)/main.c 
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)" ; mkdir build ; mkdir build/src; fi
	$(CC) $(CFLAGS) -c $(DAR)/main.c -o $(DIR)/main.o 

$(DIR)/deposit.o: $(DAR)/deposit.c
	@if [ ! -d $(DIR) ] ; then echo "creating $(DIR)" ; mkdir build ; mkdir build/src; fi
	$(CC) $(CFLAGS) -c $(DAR)/deposit.c -o $(DIR)/deposit.o 

$(DUR)/$(EXECUTABLE): $(DIR)/main.o $(DIR)/deposit.o
	@if [ ! -d $(DUR) ] ; then echo "creating $(DUR)" ; mkdir bin ; fi
	$(CC) $(DIR)/main.o $(DIR)/deposit.o -o $(DUR)/$(EXECUTABLE) 

 
Testpr: $(DUT)/$(EXECUTABLE_TEST)
$(DIT)/main.o: $(DAT)/main.c 
	@if [ ! -d $(DIT) ] ; then echo "creating $(DIT)" ; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DAT)/main.c -o $(DIT)/main.o 

$(DIT)/deposit_test.o: $(DAT)/deposit_test.c
	@if [ ! -d $(DIT) ] ; then echo "creating $(DIT)" ; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DAT)/deposit_test.c -o $(DIT)/deposit_test.o 

$(DIT)/validation_test.o: $(DAT)/validation_test.c
	@if [ ! -d $(DIT) ] ; then echo "creating $(DIT)" ; mkdir build; mkdir build/test; fi
	$(CC) $(CFLAGS) -c $(DAT)/validation_test.c -o $(DIT)/validation_test.o 

$(DUT)/$(EXECUTABLE_TEST): $(DIT)/main.o $(DIT)/deposit_test.o $(DIT)/validation_test.o $(DAR)/deposit.o
	@if [ ! -d $(DUT) ] ; then echo "creating $(DUT)" ; mkdir bin; fi
	$(CC) $(DIT)/main.o $(DIT)/deposit_test.o $(DIT)/validation_test.o $(DIR)/deposit.o -o $(DUT)/$(EXECUTABLE_TEST) 


.PHONY : clean
clean:
	rm -rf build/src/*.o build/test/*.o bin/deposit-calc/* bin/deposit-calc-test/*
