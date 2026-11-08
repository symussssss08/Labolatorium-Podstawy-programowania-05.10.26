// Labolatorium-Podstawy-programowania-05.10.26.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std; 

int main()
{
    // Przykłady 
   /*
       int i = 0; 
        char znak = '\0'; 
        cout << "\nPodaj liczbe: ";
        if (!(cin >> i))
        {
            cout << "Nie udalow sie wczyttac liczby. " << endl; 
            return 1; 
        }

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Podaj znak: ";
        if (!(cin >> znak));
        {
            cout << "Nie udalo sie wczytac znaku. " << endl;
            return 1; 
        }
        cout << "Litera to: " << znak << endl; 
        if (znak == 'C')

            cout << "Wpisales C: " << i << endl;
        else if (znak == 'F')
            cout << "Wpisales F: " << i << endl;
        else if (znak == 'K')
            cout << "Wpisales K: " << i << endl; 
        return 0;
   

        cout << "Wpisz liczbe typu double: "; 
        double number = 0.0; 
        cin >> number; 
        cout << "Wpisales: " << number << endl; 

        cout << "Jak masz na imie?: "; 
        string name; 
        cin >> name; 
        cout << "Witaj " << name << "!" << endl;
   

    // Zadanie 4

    int a;
    int b; 
    cout << "Podaj wartosci a i b: ";
    cin >> a;
    cin >> b; 
    int c = a * b; 
    int d = a + b; 
    cout << "Wynik dodawania = " << d << ", a wynikiem mnozenia jest = " << c << endl;

    float x, y; 
    cout << "Podaj wartosc x = ";
    cin >> x; 
    cout << "Podaj wartosc y = "; 
    cin >> y; 
    float z = x + y; 
    float v = x * y; 
    cout << "Wynikiem dodawania x i y jest " << z << "Wynikiem mnozenia jest " << v << endl;

    


        // Zadanie 5 

   
    double f; 
    cout << "Wprowadz wartosc farenheit: ";
    cin >> f; 
    double c; 
    c = 5.0 * (f - 32) / 9.0;
   

    cout << f << "stopni fahrenheita to " << c << " stopni Celsiusza " << endl; 
    return 0; 

    

        // Zadanie 6 

    string a, b;
    int c; 
    cout << "Podaj imie: ";
    cin >> a; 
    cout << "Podaj nazwisko: ";
    cin >> b; 
    cout << "Podaj wiek: ";
    cin >> c;
    cout << "Nazywasz sie " << a << " " << b << " i masz " << c << " lat." << endl;

    
    
        // Zadanie 7 

    int a, b; 
    cout << "Podaj wartosc a: "; 
    cin >> a; 
    cout << "Podaj wartosc b: ";
    cin >> b; 
    int c = a + b; 
    cout << "Wynik dodawania: " << c << endl; 
    int d = a - b;
    cout << "Wynik odejmowania: " << d << endl; 
    int e = a * b; 
    cout << "Wynik mnozenia: " << e << endl; 
    int f = a / b;
    cout << "Wynik dzielenia calkowitego: " << f << endl; 
    int r = a % b; 
    cout << "Wynik dzielenia z przecinkiem: " << r << endl; 
  

    

    // Zadanie 8 

    double a, b;
    cout << "Podaj wartosc a: ";
    cin >> a;
    cout << "Podaj wartosc b: ";
    cin >> b;
    double c = a + b;
    cout << "Wynik dodawania: " << c << endl;
    double d = a - b;
    cout << "Wynik odejmowania: " << d << endl;
    double e = a * b;
    cout << "Wynik mnozenia: " << e << endl;
    double f = a / b;
    cout << "Wynik dzielenia calkowitego: " << f << endl;

    
    // Zadanie 15

    double i, c;
    cout << "Ile produktow kupuje: ";
    cin >> i; 
    cout << "Cena: ";
    cin >> c; 

    cout << "Kupiles " << i << " Produktow " << " kazdy kosztowal " << c << " wszystko wynioslo " << c * i << endl; 
    
    

    // Zadanie 17 

    char znak;
    cout << "Podaj znak(jeden): "; 
    cin >> znak;
    int a; 
    cout << "Podaj liczbe: ";
    cin >> a; 
    cout << "Podales " << znak << " i " << a << endl; 
    if (znak == 'A')
        cout << "Podales A" << endl; 
    if (znak == 'B')
        cout << "Podales B " << endl; 


    */

    // Zadanie 20

    double a, b; 
    cout << "Podaj a: ";
    cin >> a; 
    cout << "Podaj b: ";
    cin >> b; 


    cout << "Format standardowy : " << a << endl; 
    cout << "Format fixed (2 miejsca po przecinku): " << fixed << setprecision(2) << a << endl; 
    cout << "format naukowy: " << scientific << a << endl; 

    










}


