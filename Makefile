
default: build

build:	print_args
	@echo "Build Done."

rebuild: clean print_args

clean:
	@echo "Cleaning..."
	@rm -rf print_args

print_args: print_args.c
	@echo "Building ..."
	@gcc print_args.c -o print_args


