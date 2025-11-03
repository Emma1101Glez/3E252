assets/musicon.wav : 

ejemplo : bin/ejemplo
	./bin/ejemplo

bin/ejemplo : src/ejemplo.cpp
	c++ src/ejemplo.cpp -o bin/ejemplo -Iinclude -lftxui-screen
# l de linker enlazar libreria 





bin/punteros : src/punteros.cpp
	c++ src/punteros.cpp -o bin/punteros -I include

ejecutar : bin/punteros	
	./bin/punteros
