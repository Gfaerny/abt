GXX=g++
all:build/%.o: src/%.c
	$(GXX) -c 
