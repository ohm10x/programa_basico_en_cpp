#include<iostream>
#include<conio.h>
#include<sstream>
#include<math.h>


using namespace std;

class Cuadrado
{
	public:
		
    int lado;  //atributo
    
    
    //constructor por defecto
    Cuadrado()
    { lado=0;	}
 	
	 //sobrecarga de constructor
	 Cuadrado(int lado)
	 {
	 	this->lado = lado;	
	 }
	 
	 	   
    //metodos 
    
    float area(){    // metodo 1

		
    return lado*lado;
		
	}
	
    float perimetro(){    //metodo 2
    	
    return lado*4;
    	
	}
	
	string toString(){   //Metodo 3
		
		stringstream out;
		
		out << "Cuadrado con lado: "<< lado <<
		", perimetro: "<< perimetro() <<
		" y area: "<<area();
		
		return out.str();
	}
	
	void dibuja(){    //metodo 4
		
		for(int i=0; i<lado; i++)
		{
				for(int j=0; j<lado; j++)
				{ 
				cout<<"* ";
				
				 }
				cout<<endl;
		}
		

}
		
};


int main(){

  /*  Cuadrado c1, c2(6);
	cout<<c1.toString() <<endl;
	c1.dibuja();
	cout<<endl<<endl;
	
	
	cout<<c2.toString() <<endl;
	c2.dibuja();
	cout<<endl<<endl;
	*/
	int tam=10;
	Cuadrado c[tam];
	
	for(int i=0; i<tam; i++)
	{
	
	c[i].lado=i;
	cout<<c[i].toString() <<endl;
	c[i].dibuja();
	cout<<endl<<endl;
}
	
	
    getch();
    return 0;

}

