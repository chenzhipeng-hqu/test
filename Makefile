
.PHONY: all clean

SRCSA += mainA.c
SRCSB += mainB.c

TARGETA := mainA
TARGETB := mainB

all: $(TARGETA) $(TARGETB)

$(TARGETA):
	@echo [build] $@ OK!
	@gcc -o ${TARGETA} ${SRCSA}

$(TARGETB):
	@echo [build] $@ OK!
	@gcc -o ${TARGETB} ${SRCSB}

clean:
	@rm -rf ${TARGETA} ${TARGETB} 
