x.exe : main.obj name.obj time.obj index.pch
	g++ -o x.txt main.obj name.obj time.obj index.pch

utils.pch : utils.cpp utils.h
	g++ -c utils.cpp util.h -p utilc.pch
	
utils.obj : utils.cpp utils.h
	g++ -c utils.cpp utils.h -o utils.obj

main.obj : main.cpp name.h time.h utils.pch
	g++ -c main.cpp name.h time.h utils.pch

name.obj : name.cpp name.h utils.pch
	g++ -c name.cpp utils.pch -o name.obj

time.obj : time.cpp time.h utils.pch
	g++ -c time.cpp utils.pch -o time.obj

clean :
	rm *.obj
	rm *.pch