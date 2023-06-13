a.out:
	gcc freopen.c -o build/freopen

run:
	./build/freopen

clean:
	rm ./build/freopen
