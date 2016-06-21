src = main.cpp
obj = $(patsubst %.cpp,%.o,$(src))

main : $(obj)
	g++-4.8 -std=c++11 $(obj) -o main
	@ echo "src = $(src)"
	@ echo "obj = $(obj)"

$(obj) : $(src)
	g++-4.8 -std=c++11 -c $< -o $@

clean :
	-rm -f main
	-rm -f *.o
