/*
Funcion usada para sumar los numeros ingrasados.
*/
double sumar(double numSuma1, double numSuma2) {
    double resSuma;
    resSuma = numSuma1 + numSuma2;
    return resSuma;
}

/*
Funcion usada para restar los numeros ingrasados.
*/
double restar(double numResta1, double numResta2) {
    double resResta;
    resResta = numResta1 - numResta2;
    return resResta;
}

double dividir(double numDiv1, double numDiv2) {
    double resDiv;
    resDiv = numDiv1 / numDiv2;
    return resDiv;
}

/*
Funcion usada para multiplicar los numeros ingrasados.
*/
double multiplicar(double numMulti1, double numMulti2) {
    double resMulti;
    resMulti = numMulti1 * numMulti2;
    return resMulti;
}

/*
Funcion usada para calcular el factorial de un numero.
*/
double factorial(double numFactor) {
    double resFacto;
    int contador;

    if (numFactor == 0 || numFactor == 1) {
        resFacto = 1;
    } else {
        for(contador = numFactor-1; contador > 0; contador--) {
            numFactor = numFactor * contador;
            resFacto = numFactor;
        }
    }
    return resFacto;
}
