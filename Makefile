all:
	mkdir -p cmake-build
	cd cmake-build; cmake -DCMAKE_BUILD_TYPE=Release -S ../ ; make

clean:
	@rm -rf cmake-*
