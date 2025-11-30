#include <iostream>
#include <thread>
#include <chrono>
#include <string>
using namespace std;
int main(){

//Autor: Joel.
const int tam = 5;

string libros[tam] = {
  "Brimstone - Callie Hart",
  "The Book of Unusual Knowledge - Publications International Ltd.",
  "The Widow - John Grisham",
  "The Correspondent - Virginia Evans",
  "Nobody's Girl: A Memoir of Surviving Abuse and Fighting for Justice - Virginia Roberts Giuffre",
};

int menuOpt;

cout<<"Bienvenido a la Libreria Online Interamericana.\n";
cout<<"En estos momentos tenemos estos libros disponibles:\n";

for(int i = 0; i < tam; i++){
    cout<<(i+1)<<") "<<libros[i]<<"\n";
    
}

cout<<"\n¿Cuál le interesa más?\n";
cin>>menuOpt;
if(menuOpt >= 1 && menuOpt <= tam){
    cout<<"Usted seleccionó: "<<libros[menuOpt - 1]<<"\n";    
}else{
    cout<<"Error, opción no reconocida.\n";
    }
//termina código de Joel.

//Autora: Daniela.

    //declaración de variables constantes y arrays.
    char menu_option, answer, answer2, answer3, answer4, answer5;
    int delay, late_fee, cvv_length, card_length, hours, rental_price[tam], message;
    string card_name, card_number, cvv, alquiler[tam];
    float ivu, sale_price[tam], total, semi_total;
    delay=0;
    
    //precios de venta
    sale_price[0]=22.64;
    sale_price[1]=16.98;
    sale_price[2]=32.00;
    sale_price[3]=28.00;
    sale_price[4]=35.00;
  
    //precios de alquiler por hora
    rental_price[0]=2;
    rental_price[1]=1;
    rental_price[2]=3;
    rental_price[3]=2;
    rental_price[4]=3;
    
    //indica precio de alquiler
    alquiler[0]="2 dólares por hora";
    alquiler[1]="1 dólar por hora";
    alquiler[2]="3 dólares por hora";
    alquiler[3]="2 dólares por hora";
    alquiler[4]="3 dólares por hora";
    
    //determina el libro
    message=menuOpt-1; 
    
        //permite al usuario elegir entre compra y venta
        cout<<"Seleccione la letra correspondiente a la acción que desee realizar.\n";
        cout<<"a) Comprar.\n";
        cout<<"b) Alquilar.\n";
        cin>>answer;
            
            if (answer=='a'||answer=='A'){
                
                //processing payment
                 ivu=sale_price[message]*0.115;
                 total=ivu+sale_price[message];
                         
                cout<<"Ha seleccionado comprar "<<libros [message]<<".\n";
                cout<<"Precio                                $"<<sale_price[message]<<"\n";
                cout<<"Ivu                                   $"<<ivu<<"\n";
                cout<<"Total                                 $"<<total<<"\n";
                cout<<"Escriba la letra correspondiente a la acción que desee realizar.\n";
                cout<<"a)Continuar compra.\n";
                cout<<"b)Cancelar compra.\n";
                cin>>answer2;
                            
               
                switch(answer2){
                    
                    
                    case'a':
                        cout<<"Ha seleccionado continuar su compra.\n";
                        cout<<"Por favor introduzca la información de la tarjeta.\n";
                        cout<<"Nombre de tarjeta (solo el primero):\n";
                        cin>>card_name;
                        cout<<"Número de tarjeta:\n";
                        cin>>card_number;
                        cout<<"Número CVV:\n";
                        cin>>cvv;
                        cout<<"Información de la tarjeta ingresada:\n";
                        cout<<"Nombre de tarjeta: "<<card_name<<"\n";
                        cout<<"Número de tarjeta: "<<card_number<<"\n";
                        cout<<"CVV: "<<cvv<<"\n";
                        cout<<"Escriba la letra correspondiente a la acción que desee realizar.\n";
                        cout<<"a) Confirmar compra.\n";
                        cout<<"b) Cancelar.\n";
                        cin>>answer3;
                        
                        //verifica los datos de tarjeta
                        card_length=card_number.length();
                        cvv_length=cvv.length();
                        
                        
                            if(answer3=='a' && card_length>=16 && card_length<=19 && cvv_length<=4 && cvv_length>=3){
                                                
                                cout<<"La compra ha sido exitosa.\n";
                                return 0;}
                            
                           
                            else if(answer3=='b'|| answer3=='B'){
                                                
                                cout<<"La compra ha sido cancelada.\n";
                                return 0;}
                               
                            else if (answer3!='a'&& answer3!='A'&& answer3!='B' && answer3!='b'){
                                
                                cout<<"Opción inválida.\n";
                                return 0;}
                                
                            else if (card_length<16 || card_length>19 || cvv_length>4 || cvv_length<3){
                                
                                cout<<"Error, verifique la cantidad de dígitos ingresados en los datos de tarjeta.\n";
                                return 0;}
                                
                    break;
                    
                   
                    case 'b':
                    
                        cout<<"La compra ha sido cancelada.\n";
                        
                        return 0;
                        
                    break;
                    
                   
                    default:
                    
                    cout<<"Opción inválida.\n";
                    return 0;}}  
                    
            //si el usuario elige alquilar.
            else if (answer=='b'||answer=='B'){
                
                cout<<"Ha seleccionado alquilar "<<libros [message]<<"\n"; 
                cout<<"Precios: \n";
                cout<<"Primera hora: gratis\n";
                cout<<"Luego de la primera hora: "<<alquiler[message]<<"\n";
                cout<<"Seleccione la letra correspondiente a la acción que desee realizar.\n";
                cout<<"a) Continuar renta.\n";
                cout<<"b) Cancelar renta.\n";
                cin>>answer4;
                  
                    if(answer4=='a'|| answer4=='A'){
                        
                        cout<<"Por favor, ingrese la cantidad de horas que desea utilizar el libro (si es menos de una hora ingrese 1).\n";
                        cin>>hours;
                        
                        
                            if (hours<1){
                                
                                cout<<"Entrada inválida.\n";
                                
                                return 0;}
                            
                            else if (hours>=1){
                            
                            semi_total=(hours-1)*rental_price[message];
                            ivu=semi_total*0.115;
                            total=semi_total+ivu;
                            
                                cout<<"Precio                              $"<<semi_total<<"\n";
                                cout<<"Ivu                                 $"<<ivu<<"\n";
                                cout<<"Total                               $"<<total<<"\n";
                                cout<<"Por favor introduzca la información de la tarjeta.\n";
                                cout<<"Nombre de tarjeta (solo el primero):\n";
                                cin>>card_name;
                                cout<<"Número de tarjeta:\n";
                                cin>>card_number;
                                cout<<"Número CVV:\n";
                                cin>>cvv;
                                cout<<"Información de la tarjeta ingresada:\n";
                                cout<<"Nombre de tarjeta: "<<card_name<<"\n";
                                cout<<"Número de tarjeta: "<<card_number<<"\n";
                                cout<<"CVV: "<<cvv<<"\n";
                                cout<<"Advertencia: si selecciona confirmar, se le aplicarán cargos adicionales a su tarjeta ingresada en caso de que posponga un recordatorio o no entregue el libro dentro del tiempo acordado.\n";
                                cout<<"Seleccione la letra correspondiente a la acción que desee realizar.\n";
                                cout<<"a) Confirmar renta.\n";
                                cout<<"b) Cancelar.\n";
                                cin>>answer5;
                                
                                //Comprueba los datos de tarjeta
                                card_length=card_number.length();
                                cvv_length=cvv.length();
                                
                             
                                    if (answer5=='b' || answer5=='B'){
                                        
                                        cout<<"Se ha cancelado la renta.\n";
                                        return 0;}
                                        
                                    else if (answer5!='b' && answer5!='B' && answer5!='A' && answer5!='a'){
                                        
                                        cout<<"Opción inválida.\n";
                                        return 0;}
                                        
                                    else if(card_length<16 || card_length>19 || cvv_length>4 || cvv_length<3){
                                        
                                        cout<<"Error, verifique la cantidad de dígitos ingresados en los datos de la tarjeta.\n";
                                        return 0;}
                                    
                                    else if (answer5=='A' || answer5=='a'){
                                        
                                        cout<<"La renta se ha realizado correctamente.\n";}}}
                    
                    
                    else if (answer4=='B' || answer4=='b'){
                        
                        cout<<"La renta se ha cancelado.\n";
                        return 0;}}
                        
            else {
                
                cout<<"Opción inválida.\n";
                return 0;}
                
//comienzo de loop
     do{    
//termina código de Daniela

//Autor: Wilfran
    string mensaje;
    int opcion, segundos, minutos;
    
    cout << "¡Bienvenido al recordatorio online de la Inter!" "\n";
    cout << "¿Cómo lo podemos ayudar en el día de hoy?" "\n";
    cout << "1. Crear un recordatorio en segundos." "\n";
    cout << "2. Crear un recordatorio en minutos." "\n";
    cout << "3. Salir" "\n";
    cout << "Seleccione una opción: ";
    cin >> opcion;
    
    while (!cin.fail() && (opcion < 1 || opcion > 3)) {
        cout << "Opción inválida. Intenta de nuevo: ";
        cin >> opcion;
    }
     if (opcion == 3) {
         cout << "¡Hasta luego!\n";
     } else if (opcion == 1) {
            cout << "Escriba lo que desea que le recordemos. (En una sola palabra)" "\n";
            cin >> mensaje;
            
        cout << "Configure el tiempo en segundos" "\n";
        cin >> segundos;
        
        cout << "Recordatorio programado...\n";
          this_thread::sleep_for(chrono::seconds(segundos));
           cout << "\n RECORDATORIO: " << mensaje << "\n";
        } else if (opcion == 2) {
            cout << "Escriba lo que desea que le recordemos. (En una sola palabra)" "\n";
            cin >> mensaje;
            cout << "Configure el tiempo en minutos:\n";
            cin >> minutos;
            
            cout << "Recordatorio programado...\n";
            this_thread::sleep_for(chrono::minutes(minutos));
            cout << "\n RECORDATORIO: " << mensaje << "\n";
        }
//termina código de Wilfran

//Autor: Daniela

    //Menú de opción para el usuario.
    cout<<"Seleccione lo que desee realizar.\n";
    cout<<"a) Entregar Libro.\n";
    cout<<"b) Posponer entrega y volver a configurar recordatorio (tendrá cargos adicionales).\n";
    cin>>menu_option;

    //if else section
    if (menu_option=='a' && delay<1){
        
        cout<<"Gracias por confirmar su entrega.\n";}
            
    else if (menu_option=='a' && delay>=1){
                
        late_fee=delay*10;
            
        cout<<"Gracias por confirmar su entrega.\n";
        cout<<"Se le ha cobrado una tarifa adicional por tardanza de "<<late_fee<<" dólares.\n";}
        
    else if (menu_option!='a'&& menu_option!='A' && menu_option!='b' && menu_option!='B'){
        
        cout<<"Error, entrada inválida.\n";
        return 0;}
        
     delay++;}      

    while(menu_option=='b');
//Termina código de Daniela
    
return 0;}