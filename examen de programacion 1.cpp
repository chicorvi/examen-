
	
	#include<iostream>
	#include<conio.h>
	
	
	using namespace std;
	int main (){
	
		
		cout<<"ingrese un numero"<<endl; 
		int f, c;
		cout<<"Porfavor, ingrese el numero de filas : "<<endl;
		cin>>f;
		cout<<"Por favor, ingrese el numero de columnas: "<< endl;
		cin >>c;
		
		int A[f][c],B[f][c],D[f][c],E[f][c]; 
		
		cout<<"porfavor, ingrese los valores de la matriz A: "<<endl;
		
		for(int i=0; i<f; i++){
		
			for(int j=0; j<c; j++){
				cout<<"["<<i<<"]["<<j<<"] = ";
				cin>>A[i][j];
			}
			cout<<endl;
		}
			cout<<"porfavor, ingrese los valores de la matriz B: "<<endl;
		for(int i=0; i<f; i++){
		
			for(int j=0; j<c; j++){
				cin>>B[i][j];
			}
			cout<<endl;
			G
		}
		
		for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			D[i][j]= A[i][j]+B[i][j];
			}
			}
		cout<<"La suma de matrices de A+B ES =:";
			for(int i=0; i<f; i++){
			for(int j=0; j<c; j++){
	
				cout<<"["<<i<<"]["<<j<<"] ="<<D[i][j]<<"\t" ;
				cout<<endl;
			}
		}
		
		for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			D[i][j]= A[i][j]*B[i][j];
			}
			}
		 
		
		}
	


