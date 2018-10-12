
typedef struct
{
    char NombreyApellido[80];
    char Direccion[60];
    char tarjetadeCredito[20];
    int estado;
    int IdPropietario;

}ePropietario;

void agregarPersona(ePropietario[],int);
char getString(char[], char*);
void stringToUpper(char[]);
int buscarPorIdPropietario(ePropietario[],int,int);
int getInt(char[],int);
int obtenerEspacioLibre(ePropietario[],int);
void inicializarEstados(ePropietario[],int);
int mostrarMenu();
void borrarPersona(ePropietario[],int, int);
void validarTarjetaDeCredito(char[]);
char deseaContinuar(char[]);
char getChar(char[],char);
char* validarStringCadena(char[]);
int validarStringEntero(char[]);
void modificarPropietario(ePropietario[],int,int);
void mostrarLista(ePropietario[],int);
int cargarHarcodePropietario(ePropietario[],int);
void mostrarListaPropietario(ePropietario[],int,int);
int validarEntero(int,char[],int,int );
void mostrarPropietarioPorNombre(ePropietario[],int);
void ordenarPropietarios(ePropietario[],int);
char stringMayusculas(char[]);
