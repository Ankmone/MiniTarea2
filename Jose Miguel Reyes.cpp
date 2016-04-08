Problema 2

class item{
public:
	item *sig;
	string valor;
	int cant_llamados;
	.
	.
	.
};

clase lista{                              
public:									  
	item *head;							  
	item *								  
	int llamados_totales;

	lista(){
		head = null;
		llamados_totales=0;
	}

	void agregar(item i){

	}


	int probabilidad(string valor){
		item *aux = head;
		while(aux->valor != valor && aux != null){
			aux = aux->sig;
		}
		if(aux == null){return 0;}
		return aux->cant_llamados/llamados_totales;
	}


	string llamar_kesimo(int k){
		int i = 0;
		item *aux = head;
		if(k == 1){return aux->valor}
		while(i < k-1){
			aux = aux->sig;
			i++;
		}
		return aux->valor;
	}

}