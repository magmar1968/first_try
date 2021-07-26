CC=g++
target=main.x

$(target):main.cpp
	$(CC) main.cpp -o $@


clear_data:
	rm generate_*/*