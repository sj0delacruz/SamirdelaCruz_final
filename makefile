all: delaCruzSamir_final_15.png

delaCruzSamir_final_15.png: graf_camp.py dat_camp.dat
	python3 graf_camp.py

dat_camp.dat: sol_camp.x
	./sol_camp.x

sol_camp.x: sol_camp.cpp
	g++ sol_camp.cpp -o sol_camp.x