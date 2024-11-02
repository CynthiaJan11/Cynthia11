 #include<iostream>
 #include<TazoDorado.hpp>

 using namespace std;
 
 
 int main(int argc, char const *argv[])
 {
    // int   entero = 0;
    // bool  booleano = true;
    // char  letra = 'A';
    // float decimal = 0.5;

    // cout<<"Tamaño entero:" << sizeof(entero)<< endl;
    // cout<<"Tamaño booleano:" << sizeof(booleano)<< endl;
    // cout<<"Tamaño letra:" << sizeof(letra)<< endl;
    // cout<<"Tamaño decimal:" << sizeof(decimal)<< endl;
    // cout<<"Tamaño de Tazo:" << sizeof(TazoDorado)<< endl;
    // cout<< endl;
    
    // TazoDorado tazos [20];
    // for(int i = 0; i < 20; i++){
      
    //   cout << "Diereccion de Tazo" << i << ":" << & tazos[i] << endl;

    // }
   
    // void* diereccion = malloc(1); 
    TazoDorado* direccion;

    direccion = (TazoDorado*)malloc(sizeof(TazoDorado));
    direccion->Inicializar();
     cout << "Valor en direccion :" << direccion->Flotando() << endl;
     
  // c++------------------------------ 
     TazoDorado *direccion2;
     direccion2 = new TazoDorado();
    cout << "Valor en direccion :" << direccion2->Flotando() << endl;

    return 0;
 }