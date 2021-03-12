#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
  int i;
  double largo1,largo2,ancho1,ancho2,profundidadPromedio,perimetro,superficieSubterranea,volumen,lpa,lma;
  largo1=25.0;
  ancho1=10.0;
  largo2=30;
  ancho2=12;
  lpa=largo1*ancho1;
  lma=largo1+ancho1;
  cout<<"Largo  ||  Ancho ||   Profundidad  ||  Perimetro ||  Volumen ||  Area de superficie subterranea"<<endl;
  cout<<"==============================================================================================="<<endl;
  
  i=0;
  profundidadPromedio=5.0;
  while(i!=4){
    perimetro=2*lma;
    volumen=lpa*profundidadPromedio;
    superficieSubterranea=2*lma*profundidadPromedio+lpa;
    cout<<setw(4)<<fixed<<setprecision(1)<<largo1<<"       "<<ancho1<<"       "<<profundidadPromedio<<"               "<<perimetro<<"          "<<volumen<<"     "<<superficieSubterranea<<endl;
    profundidadPromedio+=0.5;
    i+=1;
    }
  
  i=0;
  profundidadPromedio=5.0;
  lpa=largo2*ancho2;
  lma=largo2+ancho2;
  while(i!=4){
    perimetro=2*lma;
    volumen=lpa*profundidadPromedio;
    superficieSubterranea=2*lma*profundidadPromedio+lpa;
    cout<<setw(4)<<fixed<<setprecision(1)<<largo2<<"       "<<ancho2<<"       "<<profundidadPromedio<<"               "<<perimetro<<"          "<<volumen<<"     "<<superficieSubterranea<<endl;
    profundidadPromedio+=0.5;
    i+=1;
  }
  return 0;
}
