all:
	mkdir -p cmake-build
	cd cmake-build; cmake -DCMAKE_BUILD_TYPE=Release --build ../ ; make

clean:
	@rm -rf cmake-*
