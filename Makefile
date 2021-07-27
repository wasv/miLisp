build/CMakeCache.txt: CMakeLists.txt
	cmake -Bbuild/ .

build/%: build/CMakeCache.txt
	cmake --build build --target $*
