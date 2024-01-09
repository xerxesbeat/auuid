
all: build

build:
	gcc main.c -luuid -o auuid

install:
	if [ -f auuid ]; then sudo cp auuid /usr/bin/auuid; else echo "Please build the source before installing. (try 'make all')"; fi

clean:
	if [ -f auuid ]; then rm auuid; fi
