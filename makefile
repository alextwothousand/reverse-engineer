default: build

build:
	premake5 gmake2
	cd build && make

clean:
	rm -rf build