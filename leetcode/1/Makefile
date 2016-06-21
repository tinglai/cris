src = main.cpp
obj = $(patsubst %.cpp,%.o,$(src))

main : $(obj)
	g++ $(obj) -o main
	@ echo "src = $(src)"
	@ echo "obj = $(obj)"

$(obj) : 

clean :
	-rm -f main
	-rm -f *.o
