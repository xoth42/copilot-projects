hellocpp:
	g++ --std=c++11 -o bin/hello.out src/cpp/hello.cpp;
	./bin/hello.out;

itercpp:
	g++ --std=c++11 -o bin/iter.out src/cpp/iterate.cpp;
	./bin/iter.out;

picturep:
	fpc src/pascal/picture.p;
	rm src/pascal/picture.o;
	mv src/pascal/picture bin/
	./bin/picture;

hellop:
	fpc src/pascal/hello.p;
	rm src/pascal/hello.o;
	mv src/pascal/hello bin/
	./bin/hello;

clean:
	rm -f bin/*;