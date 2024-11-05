run : bin/tazo
	./bin/tazo

runMem : bin/mem
	   ./bin/mem

bin/tazo : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo

bin/mem : src/memoria.cpp
	g++ src/memoria.cpp -Iinclude -o bin/mem

assets/mensaje : bin/tazo
	./bin/tazo > assets/mensaje

runAnimacion : bin/animacion
	   ./bin/animacion

bin/animacion : src/canvas_animated.cpp
	g++ src/canvas_animated.cpp -Iinclude -o bin/animacion -std=c++17 -lftxui-screen -lftxui-dom -lftxui-component

runPrueba : bin/prueba
	   ./bin/prueba

bin/prueba : src/prueba.cpp
	g++ src/prueba.cpp -Iinclude -o bin/prueba -std=c++17 -lftxui-screen -lftxui-dom -lftxui-component