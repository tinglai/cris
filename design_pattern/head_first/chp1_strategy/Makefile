src = quack.cpp iduck.cpp cduck.cpp main.cpp
obj = $(patsubst %.cpp,%.o,$(src))

main : iduck.o cduck.o quack.o main.o
	g++-4.8 -std=c++11 iduck.o cduck.o quack.o main.o -o main
	@ echo "obj = $(obj)"

quack.o : quack.cpp
	g++-4.8 -std=c++11 -c $< -o $@

iduck.o : iduck.cpp 
	g++-4.8 -std=c++11 -c $< -o $@

cduck.o : cduck.cpp 
	g++-4.8 -std=c++11 -c $< -o $@

main.o : main.cpp
	g++-4.8 -std=c++11 -c $< -o $@

#$(obj) : $(src)
#	g++-4.8 -std=c++11 -c $< -o $@
#	@ echo "src = $(src)"

clean :
	-rm -f main
	-rm -f *.o
