#include "../include/refugio.h"

struct rep_refugio {
    /************ Parte 5.1 ************/
    TPerro perro[MAX_PERROS];
    int tope;
    /****** Fin de parte Parte 5.1 *****/
};

TRefugio crearTRefugio()
{
    TRefugio  refugio = new rep_refugio;
    refugio->tope = 0; // incializo a cero el tope del array Perros.
    return refugio;
//    return NULL; 
}

void liberarTRefugio(TRefugio& refugio)
{
    // para liberar refugio hay que dar de baja cada perro
    int ix;
    for(ix=0; ix < refugio->tope ; ix++)
    {
           delete refugio->perro[ix];                  
    }        
    delete refugio;
}

void agregarEnTRefugio(TRefugio& refugio, TPerro perro)
{
    //

}

void imprimirTRefugio(TRefugio refugio) {

}

bool estaEnTRefugio(TRefugio refugio, int id) {
    return false;
}

TPerro obtenerDeTRefugio(TRefugio refugio, int id) {
    return NULL;
}

bool ingresaronPerrosFechaTRefugio(TRefugio refugio, TFecha fecha) 
{
    return false;
}

void imprimirPerrosFechaTRefugio(TRefugio refugio, TFecha fecha) 
{

}

void removerDeTRefugio(TRefugio& refugio, int id) 
{
    
}

//----------------------------------------------------------
// Funciones auxiliares privadas dentro del Modulo Refugio
//

#define MAX_SIZE 100  // Tamaño máximo del vector

static int buscarPosicion(int vector[], int n, int valor)
{
    int inicio = 0;
    int fin = n - 1;

    while (inicio <= fin)
    {
        int medio = inicio + (fin - inicio) / 2;

        if (vector[medio] == valor)
        {
            return medio;  // El valor ya existe, lo insertamos aquí
        }
        else if (vector[medio] < valor)
        {
            inicio = medio + 1;
        }
        else
        {
            fin = medio - 1;
        }
    }
    return inicio;  // Posición donde se debe insertar el nuevo valor
}

static void insertarOrdenado(int vector[], int *n, int valor)
{
    if (*n >= MAX_SIZE)
    {
        printf("El vector está lleno, no se puede insertar más elementos.\n");
        return;
    }

    // Encontrar la posición donde insertar el valor
    int pos = buscarPosicion(vector, *n, valor);

    // Desplazar los elementos a la derecha para hacer espacio
    for (int i = *n; i > pos; i--)
    {
        vector[i] = vector[i - 1];
    }

    // Insertar el valor en la posición correcta
    vector[pos] = valor;
    (*n)++;
}

static int pru_main()
{
    int vector[MAX_SIZE];
    int n = 0;  // Número actual de elementos en el vector

    // Insertar valores en el vector
    insertarOrdenado(vector, &n, 5);
    insertarOrdenado(vector, &n, 3);
    insertarOrdenado(vector, &n, 8);
    insertarOrdenado(vector, &n, 1);

    // Imprimir el vector ordenado
    printf("Vector ordenado: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");

    return 0;
}


