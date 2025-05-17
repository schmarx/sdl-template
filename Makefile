src_dir = ./src
main_file = ./src/main.c
other_files = ./src/sim.c ./src/render.c ./src/vec.c

output_file = ./bin/main.o

includes = -L/usr/include/SDL2/
links = -lSDL2 -lSDL2_image -lSDL2_ttf -lm

run:
	mkdir -p bin
	gcc -Wall -pedantic -O3 ${main_file} ${other_files} -o ${output_file} ${includes} ${links}
	${output_file} ${N} ${w} ${h}

count:
	@wc -l $$(git ls-files | grep 'src/.*')
	@echo ""
	@echo commits:
	@git rev-list --count --all