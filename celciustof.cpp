#include<iostream>
using namespace std;
/*
1_ Conversor de Celcius a fahrenheit
2_Determinar si un numero es primo
3_Conteo Regresivo
4_Sumar numeros hasta un limite
*/
void f();
int main(){
    //(0 °C × 9/5) + 32
    //ej 1 celsius a f
    /*float celsius;
    cout << "Ingrese la temperatura en celsius: \n";
    cin >> celsius;
    cout << celsius <<" a fahrenheit es " << (celsius * 9/5) + 32 << " \n";


    //ej 3 -  conteo regresivo
    int numero;

    cout<< "Ingrese un numero entero: ";
    cin >> numero;
    for(int i = numero; i>=1;i--){
        cout<< i << " \n";
        }
    cout<<"\n";
*/
    // sumar hasta un limite

    float numero;
    int acumulador = 0;
    int limite = 0;
    bool repetir = true;

    while(repetir){
        cout<< "Ingrese el limite: ";
        cin >> limite;
        if(limite<0){
            cout<< "El numero es negativo. Intente nuevamente.\n";

        }else{
            repetir = false;
        }
    }

    for(int i = 0; i <= limite; i++){
        acumulador += i;
    }
    cout<<"La suma total es de : "<<acumulador<<"\n";



/*
    int numero;
    int i = 1;

    cout<< "Ingrese un numero entero: \n";
    cin >> numero;
    bool es_primo = true;
    while(i<=numero && es_primo){
        if(numero % i == 0 && i != 1 && i!= numero){
            es_primo = false;
        }
        i = i + 1;
    }
    if(es_primo){
        cout<<"Es primo\n";
    }else{
        cout<<"No es primo\n";
    }
    /*for(int i = 1; i<= numero;i++){
        if(numero % i == 0 && i != 1 && i!= numero){
            cout<<i<<endl;
            es_primo = false;
            break;
        }
    }*/

    f();
    return 0;
}
void f(){
    main();
}
