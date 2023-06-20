build:
	g++ \
	-Wfatal-errors \
	-std=c++11 \
	main.cpp \
	game.cpp \
	well.cpp \
	tetromino.cpp \
	label.c \
	-I"C:\SDL2\include" \
	-L"C:\SDL2\lib" \
	-lmingw32 \
	-lSDL2main \
	-lSDL2 \
	-lSDL2_ttf \
	-o build.exe

run:
	build.exe

clear:
	del *.exe && del tempCodeRunnerFile.py