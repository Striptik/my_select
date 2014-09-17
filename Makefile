all:
	cd my/; make
	cd doubcircul/; make
	cd src/; make

clean:
	cd my/; make clean
	cd doubcircul/; make clean
	cd src/; make clean

fclean:
	cd my/; make fclean
	cd doubcircul/; make fclean
	cd src/; make fclean

re:
	cd my/; make re
	cd doubcircul/; make re
	cd src/; make re
