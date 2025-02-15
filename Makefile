CC=gcc

PREFIX=/usr
BINDIR=$(PREFIX)/bin
LIBDIR=$(PREFIX)/lib

build: libxrandrstub.c
	$(CC) -shared -o libxrandrstub.so -fPIC libxrandrstub.c

.PHONY: install
install:
	install -m 0644 libxrandrstub.so $(LIBDIR)
	install -m 0755 xrandrstub-run $(BINDIR)

.PHONY: uninstall
uninstall:
	rm $(LIBDIR)/libxrandrstub.so
	rm $(BINDIR)/xrandrstub-run
