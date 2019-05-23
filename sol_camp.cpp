#include <iostream>

#include <fstream>

#include <stdio.h>

#include <string>

#include <cmath>

using namespace std;


void solucion_salt_rana(float t1, float t2, float dx, string nombreArc);
int E(float t);


int main(){
	
    float dt=10.0/1000.0;

    solucion_salt_rana(0.0, 10.0, dt, "dat_camp.dat");

    

    return 0;

}

int E(float t){
    if (t>3 && t<7){
        return 3;
    }
    else {
        return 0;
    }
}



void solucion_salt_rana(float t1, float t2, float dt, string nombreArc){
	float q=2;
    float t=t1,x_n=1.0,y_n=0.0,xp_n=0.0,yp_n=1.0;

    float y_n1,yp_n0o5,yp_n1,x_n1,xp_n0o5,xp_n1;

    ofstream outfile;

    outfile.open(nombreArc);



    while(t<=t2){

        yp_n0o5=yp_n+q*E(t)*dt/2;

        y_n1=y_n+yp_n0o5*dt;

        yp_n1=yp_n0o5+q*E(t)*dt/2;
        
        xp_n0o5=xp_n+0*q*E(t)*dt/2;

        x_n1=x_n+xp_n0o5*dt;

        xp_n1=xp_n0o5+0*q*E(t)*dt/2;

        outfile << t << " " << x_n << " " << y_n <<endl;

        y_n=y_n1,yp_n=yp_n1,x_n=x_n1,xp_n=xp_n1,t+=dt;

    }

    outfile.close();

}