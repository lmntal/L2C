SOURCES = l2c.il
LIBS = parser.il scanner.il subproc.il ast.il normalise_syntax.il

.SUFFIXES: .lmn .il

default: run

run: $(SOURCES)
	@echo "...done"

clean:
	rm -f *.il
	rm -f lib/*.il

$(SOURCES): $(addprefix lib/, $(LIBS))

.lmn.il:
	$(LMNC) $(LMNCFLAGS) $< >$@
