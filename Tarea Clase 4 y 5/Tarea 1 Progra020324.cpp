#include <iostream>
using namespace std;
main (){
	
	int inicio=0,fin,res=0;
	
	cout<<"ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"ingrese tabla final: ";
	cin>>fin;
	
	for (int rango=inicio;rango<=fin;rango++){
	cout<<"tabla del "<<rango<<endl;	
		for (int i=1;i<=10;i++){
		res=rango*i;
		cout<<rango<<"X"<<i<<"="<<res<<endl;
		
	}
	
	
	
	}
}
