#include <iostream>

using namespace std;

/*8) Dada una lista de números compuesta por grupos donde cada grupo está separado del
siguiente por un cero, y la lista de números finaliza cuando se ingresan dos ceros
consecutivos, se pide determinar e informar:

a) La cantidad de grupos en los que se detecten un total de 4 o más números primos
consecutivos. Se informa 1 resultado al final.
b) Para cada uno de los grupos en los que se haya detectado números negativos, el mayor y
el segundo mayor de los mismos y en que posición estaban dentro del subgrupo. En los
grupos sin negativos, informar “Grupo sin negativos”. Se informan 4 resultados por cada
grupo.
c) El mayor número primo de todos los grupos, informando además en que grupo y en qué
posición del mismo fue detectado. Se informan 3 resultados al final.*/


int main(){
    int n , anterior , primo ;
    bool bandera  ;
    int contPrincipal , contPrimos =0 , contGrupoPrimosConsecutivos = 0;
    bool banderaNoPrimo;

    cout << " ingrese un numero : " << " " ;
    cin >> n; // n = 2

    while( n!= 0){
        contPrimos =0;
        bandera = false;


        while( anterior != 0 || bandera == false){ // anterior = 7
            contPrincipal = 0;
            bandera = true; // bandera = true
            banderaNoPrimo = false;

            for(int x=1;x<=n;x++){ // n = 2 % x // n = 3 % x // n = 5 % x // n = 7 %x // n = 0
                if(n%x == 2){
                    contPrincipal++;
                }
            }
            if(contPrincipal == 2 ){
                contPrimos++; // contprimo = 4
                primo = n;  // primo =2 // primo = 3 // primo = 5 // primo = 7
                anterior = primo; // anterior = 2 // anterior = 3 // anterior = 5 // anterior = 7
            }else if (contPrincipal != 2 ){
                banderaNoPrimo = true; // bandera = true
            }
            if ( banderaNoPrimo == true ){
                anterior = n; // anterior = 0
                contPrimos = 0; // contPrimos = 0
            }
            if(contPrimos >= 4 ){
                contGrupoPrimosConsecutivos++; // contGrupoPrimosConsecutivos = 1
            }



                cout << " ingrese un numero : " << " " ;
            cin >> n; // n = 3 // n = 5 // n = 7 // n = 0

            }





        }


        cout << " cantidad de grupos con numeros primos consecutivos : " << contGrupoPrimosConsecutivos ;


return 0;
    }










