#include<iostream>
#include<string>
using namespace std;

int valorfrase(string frase);

int main (){
	
string frase;


cout<<"ingresar una frase: ";
getline(cin,frase);
	
	
cout<<valorfrase(frase)<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

int valorfrase(string frase){
	int colador=0;

	for(int i=0;i< frase.size();i++ ){
		
		if(frase[i]=='a'||frase[i]=='e'){
		
		
		colador+=1;
		
	}
		if(frase[i]=='o'||frase[i]=='s'){
		
		
		colador+=2;
		
	}
	if(frase[i]=='d'||frase[i]=='i'||frase[i]=='n'||frase[i]=='r'){
	
		
		colador+=3;
		
	}
		if(frase[i]=='c'||frase[i]=='l'||frase[i]=='t'||frase[i]=='u'){
		
		
		colador+=4;
		
	}
		if(frase[i]=='m'||frase[i]=='p'){
		
		
		colador+=5;
		
	}
		if(frase[i]=='b'||frase[i]=='f'||frase[i]=='g'||frase[i]=='h'||frase[i]=='j'||frase[i]=='q'||frase[i]=='v'||frase[i]=='x'||frase[i]=='y'||frase[i]=='z'){
		
		
		colador+=6;
		
	}
	if(frase[i]=='k'||frase[i]=='w'){
	
		
		colador+=7;
		
	}
}
	return colador;
}
