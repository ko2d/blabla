all: algo1 algo2
algo1: 1.c
	@gcc 1.c -o algo1
	@time ./algo1
algo2: 2.c
	@gcc 2.c -o algo2
	@time ./algo2
