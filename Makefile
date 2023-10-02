all:
	mkdir -p cmake-build
	cmake -DCMAKE_BUILD_TYPE=Release -B cmake-build -S . 
	make -C cmake-build

win:
	test -d cmake-build || mkdir cmake-build
	cmake -DCMAKE_BUILD_TYPE=Release -G "MinGW Makefiles" -B cmake-build -S  . 
	make -C cmake-build

clean:
	@rm -rf cmake-*
