int multiplicar(int a, int b) 
{

    int resultado = 0;
    int positivo = 1;

    if (b < 0) {
        positivo = -1;
        b = -b;
    }

    for (int i = 0; i < b; i++) {
        resultado += a;
    }

    return resultado * positivo;
}
