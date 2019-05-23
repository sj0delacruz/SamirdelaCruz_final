all: delaCruzSamir_final_16.png

delaCruzSamir_final_16.png: graf_sub.py dat_sub.dat
	python3 graf_sub.py

dat_sub.dat: sol_sub.x
	./sol_sub.x

sol_sub.x: sol_sub.cpp
	g++ sol_sub.cpp -o sol_sub.x