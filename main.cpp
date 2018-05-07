#include <iostream>
#include <cstdlib>

#include <fstream>

using namespace::std;

struct nodo{ //estructura para definir el nodo
    int dato;

    nodo* siguiente; //apuntador nodo
} *primero, *ultimo;

void insertNodo(); // permite traer  el metodo para insertar  el costo al enrutador
void buscarNodo();// permite traer  el metodo para Buscar el costo del  enrrutador
void modificarNodo(); // permite traer  el metodo para modificar los costos del enrrutador
void eliminarNodo(); // permite traer  el metodo para E  los datos
void desplegarLista(); // permite traer  el metodo para insertar  los datos del ruter a la lista
void insert();
void ModelarRed();


int main(){
    int opcion_menu=0;
    // se crea el menu principal

    string contenido;
    do{
        cout<< "\n|---------------------------------------------------|";
        cout<< "\n|                 * Bienvenido *                    | ";
        cout<< "\n|---------------------------------|-----------------|";
        cout<< "\n|  1. Punto A                     |  4. Punto B c.  |";
        cout<< "\n|  2. Punto B a.                  |  5. Punto E     |";
        cout<< "\n|  3. Punto B b.                  |  6. Salir       |";
        cout<< "\n|-------------------------------- |-----------------|";
        cout<< "\n\n Escoja una opcion:";
        cin>> opcion_menu;
        switch(opcion_menu){
            case 1:
                cout<<"\n\n Vamos a a modelar el enrutador,  tal cual como en la guia teniendo enrutador A, enrutador B, enrutador D y enrutador C  \n\n";
                insertNodo();
                break;
            case 2:
                cout<<"\n\n Agregar enrutador \n\n";
                insert();
                desplegarLista();
                eliminarNodo();
                break;
            case 3:
                cout<<"\n\n Modelar red en estrella \n\n";

                break;
            case 4:
                cout<<"\n\n Agregar enrutador \n\n";
                insertNodo();

                break;
            case 5:
                cout<<"\n\n Desplegar lista de nodos \n\n";
                desplegarLista();
                break;
            case 6:
                cout<<"\n\n Programa finalizado.... \n\n";
                break;
            default:
                cout<< "\n\n Opcion no valida";
                break;
        }
    }while(opcion_menu !=6);

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void ModelarRed(){
    //cada vez que se inserte un nodo se declara un nuevo nodo
    nodo* nuevo=new nodo();
    int co1b=0,co1c=0,co1d=0,co2a=0,co2c=0,co2d=0,co3a=0,co3b=0,co3d=0,co4a=0,co4b=0,co4c=0,ab,ad,ac;
    int Mat[4][4];
    //cout<<"Ingrese el dato que contendra el nuevo Naodo";
    cout<<"\n\n Teniendo definido el enrutador vamos a ingresar los costos: \n\n";
    cout<<"\n\n Ingrese el costo entre el enrutador A hacia enrutador B \n\n";
    cin>>ab;
    cout<<"\n\n Ingrese el costo entre el enrutador A hacia enrutador D \n\n";
    cin>>ad;
    cout<<"\n\n Ingrese el costo entre el enrutador C hacia enrutador C \n\n";
    cin>>ac;
    cout<<"\n\n Ingrese el costo entre el enrutador A hacia enrutador C \n\n";
    cin>>ac;
    //cin>>nuevo->dato;





         //de a hacia b
         co1b=ab;

         //de a hacia c
         co1c=ac;

        //de a hacia d
        co1d=ad;

        //de b hacia a
        co2a=ab;

       //de b hacia c
        co2c=ab+ac;

       //de b hacia d
       co2d=ab+ad;


       //de c hacia a
       co3a=ac;

       //de c hacia b
       co3b=ac+ab;

}


























//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////77
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void insert(){
    //cada vez que se inserte un nodo se declara un nuevo nodosi am
    int res;
    cout<<"Digite la cantidad de enrutadores que desea agregar";
    cin>>res;
        for(int l=1;l<=res;l++){
             nodo* nuevo=new nodo();
             cout<<"Ingrese el dato que contendra el nuevo Nodo";
             cin>>nuevo->dato;
           if (primero == NULL){
               primero=nuevo;
               primero->siguiente=NULL;
               ultimo=nuevo;
            }else{

                 ultimo->siguiente=nuevo;
                 nuevo->siguiente=NULL;
                 ultimo=nuevo;
          }
          cout<<"\n Nodo Ingresado\n\n";


       }

}






void insertNodo(){
    //cada vez que se inserte un nodo se declara un nuevo nodo
    nodo* nuevo=new nodo();
    int ab, bd, dc, ac;
    int Mat[4][4];
    string contenido;
    //cout<<"Ingrese el dato que contendra el nuevo Naodo";
    cout<<"\n\n Teniendo definido el enrutador vamos a ingresar los costos: \n\n";
    cout<<"\n\n Ingrese el costo entre el enrutador A hacia enrutador B \n\n";
    cin>>ab;
    cout<<"\n\n Ingrese el costo entre el enrutador B hacia enrutador D \n\n";
    cin>>bd;
    cout<<"\n\n Ingrese el costo entre el enrutador D hacia enrutador C \n\n";
    cin>>dc;
    cout<<"\n\n Ingrese el costo entre el enrutador A hacia enrutador C \n\n";
    cin>>ac;
    //cin>>nuevo->dato;


    int sum1=0,costoa=0,costob=0,costoc=0,costod=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0,sum9=0,sum10=0,i,j;
    int sum11=0,sum12=0,sum13=0,sum14=0,sum15=0,sum16=0,costa=0,costb=0,costc=0,costd=0;
    int cosa=0,cosb=0,cosd=0,coa=0,cob=0,coc=0,cosc=0;

    //desde A hacia B
    sum1=ac+dc+bd;

    Mat[0][0] = 0;
    if(ab<=sum1){
        costoa=ab;
        Mat[0][1] = costoa;
    }else{
        costoa=sum1;
        Mat[0][1] = costoa;
    }

    //desde A hacia C
    sum2=ab+bd+dc;
    if(ac<=sum2){
        costoc=ac;
        Mat[0][2] = costoc;
    }else{
        costoc=sum2;
        Mat[0][2] = costoc;
    }

    //desde A hacia D
    sum3=ab+bd;
    sum4=ac+dc;
    if(sum3<=sum4){
        costod=sum3;
        Mat[0][3] = costod;
    }else{
        costod=sum4;
        Mat[0][3] = costod;
    }

    //desde B hacia A
    Mat[1][1]=0;
    sum5=bd+dc+ac;
    if(ab<=sum5){
        costa=ab;
        Mat[1][0] = costa;
    }else{
        costa=sum5;
        Mat[1][0] = costa;
    }

        //desde B hacia C
    sum6=ab+ac;
    sum7=bd+dc;
    if(sum6<=sum7){
        costc=sum6;
        Mat[1][2] = costc;
    }else{
        costc=sum7;
        Mat[1][2] = costc;
    }

        //desde B hacia D
    sum8=ab+ac+dc;
    if(bd<=sum8){
        costd=bd;
        Mat[1][3] = costd;
    }else{
        costa=sum8;
        Mat[1][3] = costd;
    }


    //desde C hacia A
    Mat[2][2] = 0;
    sum9=dc+bd+ab;
    if(ac<=sum9){
        cosa=ac;
        Mat[2][0] = cosa;
    }else{
        cosa=sum9;
        Mat[2][0] = cosa;
    }


    //desde C hacia B
    sum10=dc+bd;
    sum11=ac+ab;
    if(sum10<=sum11){
        cosb=sum10;
        Mat[2][1] = cosb;
    }else{
        cosb=sum11;
        Mat[2][1] = cosb;
    }

    //desde C hacia D
    sum12=ac+ab+bd;
    if(dc<=sum12){
        cosc=dc;
        Mat[2][3] = cosc;
    }else{
        cosc=sum12;
        Mat[2][3] = cosc;
    }

    //desde D hacia A
    Mat[3][3] = 0;
    sum13=bd+ab;
    sum14=dc+ac;
    if(sum13<=sum14){
        coa=sum13;
        Mat[3][0] = coa;
    }else{
        coa=sum14;
        Mat[3][0] = coa;
    }

    //desde D hacia B
    sum15=dc+ac+ab;
    if(bd<=sum15){
        cob=bd;
        Mat[3][1] = cob;
    }else{
        cob=sum15;
        Mat[3][1] = cob;
    }

    //desde D hacia C
    sum16=bd+ab+ac;
    if(dc<=sum16){
        coc=dc;
        Mat[3][2] = coc;
    }else{
        coc=sum16;
        Mat[3][2] = coc;
    }


    ofstream fs(contenido.c_str());// crea el archivo
    cout<< "La tabla de enrutamiento es :";
    for ( i=0;i<4;i++){
        for( j=0;j<4;j++){
            //cout<< "muestre",i,j;
            printf(" |%d| ",Mat[i][j]);
            fs << Mat[i][j] << endl;  //imprime vector en archivo

          }
           printf("\n");
    }

     fs.close();


    /*if (primero == NULL){
        primero=nuevo;
        primero->siguiente=NULL;
        ultimo=nuevo;
    }else{
        ultimo->siguiente=nuevo;
        nuevo->siguiente=NULL;
        ultimo=nuevo;
    }*/
    cout<<"\n Nodo Ingresado\n\n";
}

void buscarNodo(){
    nodo* actual=new nodo(); //recorrer la lista
    actual=primero;
    bool encontrado=false;
    int nodoBuscado=0;
    cout<<"Ingrese el dato del nodo a Buscar";
    cin>>nodoBuscado;
    if(primero !=NULL){

        while(actual !=NULL && encontrado !=true){
            if(actual->dato==nodoBuscado){
                cout<<"\n Nodo con el dato"<< nodoBuscado<<" Encontrado\n\n";
                encontrado=true;
            }
            actual=actual->siguiente;

        }
        if(!encontrado){
            cout<<"\n Nodo no encontrado \n\n";
        }

    }else{
        cout<<"\n la lista se encuentra vacia";
    }
}


void modificarNodo(){
    nodo* actual=new nodo(); //recorrer la lista
    actual=primero;
    bool encontrado=false;
    int nodoBuscado=0;
    cout<<"Ingrese el dato del nodo a Buscar para Modificar";
    cin>>nodoBuscado;
    if(primero !=NULL){

        while(actual !=NULL && encontrado !=true){
            if(actual->dato==nodoBuscado){
                cout<<"\n Nodo con el dato"<< nodoBuscado<<" Encontrado\n\n";
                cout<<"\n Ingrese el Nuevo dato para este Nodo: ";
                cin >>actual->dato;
                encontrado=true;
            }
            actual=actual->siguiente;

        }
        if(!encontrado){
            cout<<"\n Nodo no encontrado \n\n";
        }

    }else{
        cout<<"\n la lista se encuentra vacia";
    }
}

void eliminarNodo(){

  int res;
    cout<<"si desea eliminar algun enrutador oprima el 1 de lo contrario oprima 0 ";
    cin>>res;

  while(res==1){


    nodo* actual= (nodo*) malloc (sizeof(nodo));//apuntador que ayuda a recorrer la lista
    actual=primero;
    nodo* anterior= (nodo*) malloc(sizeof(nodo));
    anterior=NULL;
    int nodoBuscado=0, encontrado=0;
    printf("Ingrese el costo del enrutador que desea eliminar: ");
    scanf("%d", &nodoBuscado);
    if(primero !=NULL){
        while(actual !=NULL && encontrado !=true){
            if(actual->dato==nodoBuscado){
                if(actual==primero){
                    primero=primero->siguiente;
                }else if(actual==ultimo){
                    anterior->siguiente=NULL;
                    ultimo=anterior;

                }else{
                    anterior->siguiente=actual->siguiente;

                }
                printf("\n Nodo eliminado con exito");
                encontrado=1;

             }
             anterior=actual;
             actual=actual->siguiente;
        }
        if(encontrado==0){
            printf("\n Nodo no encontrado\n\n");

        }else{
            free(anterior);
        }
    }else{
        printf("\n la lista se encuentra vacia\n\n");
    }

    cout<<"\n si desea eliminar algun enrutador oprima el 1 de lo contrario oprima 0 ";
    cin>>res;
 }


}

void desplegarLista(){
    nodo* actual=new nodo(); //recorrer la lista
    actual=primero;
    if(primero !=NULL){

        while(actual !=NULL){
            cout<< " "<<actual->dato <<endl;
            actual=actual->siguiente;


        }

    }else{
        cout<<"\n la lista se encuentra vacia";
    }
}
