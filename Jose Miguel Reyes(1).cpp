Problema 1

void agrega(data x){ insert(x); }

data saca()        { delete(); }

bool estaVacio()   { isEmpty(); }

bool pertenece(data x){						// Mi idea era que mientras saca y comparo si esta x,
	if(!estaVacio()){						// al mismo tiempo vaya agregando lo que saca para no quedarme sin conjunto.
		data aux = saca();
		agrega(aux);
		while(!estaVacio() && aux != x){
			aux = saca();
			agrega(aux);
		}
		if(aux = x){
			return true;
		}
		return false;
	}
	return false;
}

