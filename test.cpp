// test.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
const int wiersze = 2;
const int kolumny = 4;

void tworzenietablicy(int tablica[wiersze][kolumny])
{
    cout << "Wypelnij pierwsza tablice 3x3" << endl;
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            cout << "Podaj element [" << i << "]" << "[" << j << "]" << " : ";
            cin >> tablica[i][j];
        }
    }
}
void tworzenietablicy2(int tablica[wiersze][kolumny])
{
    cout << "Wypelnij druga tablice 3x3" << endl;
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            cout << "Podaj element [" << i << "]" << "[" << j << "]" << " : ";
            cin >> tablica[i][j];
        }
    }
}
bool sprawdzanieTablicy(int tablica[wiersze][kolumny], int tablica2[wiersze][kolumny])
{
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            if (tablica[i][j] != tablica2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
void drukowanieTablicy(int tablica[wiersze][kolumny])
{
    cout << "Elementy tablicy 3x3" << endl;
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            cout.width(4);
            cout << tablica[i][j];
        }
        cout << endl;
    }
}
void dodawanie(int tablica[wiersze][kolumny])
{
    int suma = 0;
    int wszsuma = 0;
    int liczba = 0;
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            if (i == j)
            {
                suma += tablica[i][j];
            }
        }
    }
    cout << "Suma przekatnej wynosi: " << suma << endl;
}
void drukowanieSuma(int tablica[wiersze][kolumny])
{
    int suma = 0;
    
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            if (tablica[i][j] > 50)
            {
                suma += tablica[i][j];
            }
        }
    }
    cout << "Suma elementow wiekszych od 50 jest rowna: " << suma << endl;
}
void kilkaOpcji(int tablica[wiersze][kolumny])
{
    int licznik = 0;
    int licznik1 = 0;
    int suma = 0;
    int suma1 = 0;

    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            if (tablica[i][j] % 2 == 0)
            {
                licznik++;
                suma += tablica[i][j];
            }
            else
            {
                licznik1++;
                suma1 += tablica[i][j];
            }
        }
    }
    cout << "Ilosc parzystych elementow: " << licznik << endl;
    cout << "Suma parzystych elementow: " << suma << endl;
    cout << "Ilosc nieparzystych elementow: " << licznik1 << endl;
    cout << "Suma nieparzystych elementow: " << suma1 << endl;
}
void zad7(int tablica[wiersze][kolumny])
{
    int licznik = wiersze * kolumny;
    int suma = 0;
    int najwiekszy = tablica[0][0];
    int najmniejszy = tablica[0][0];
    int licznikwiek = 0;
    int licznikmniej = 0;
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            suma += tablica[i][j];
            if (tablica[i][j] > najwiekszy)
            {
                najwiekszy = tablica[i][j];
            }
            if (tablica[i][j] < najmniejszy)
            {
                najmniejszy = tablica[i][j];
            }
        }
    }
    float srednia = (float)suma / licznik;
    for (int i = 0; i < wiersze; i++)
    {
        for (int j = 0; j < kolumny; j++)
        {
            if (tablica[i][j] > srednia)
            {
                licznikwiek++;
            }
            else
            {
                licznikmniej++;
            }
        }
    }
    cout << "Srednia wynosi: " << srednia << endl;
    cout << "Maksymalny element wynosi: " << najwiekszy << endl;
    cout << "Najmniejszy element wynosi: " << najmniejszy << endl;
    cout << "Liczba elementow wiekszych od sredniej: " << licznikwiek << endl;
    cout << "Liczba elementow mniejszych od sredniej: " << licznikmniej << endl;

}


int main()
{
    int tablica[wiersze][kolumny];
    int tablica2[wiersze][kolumny];
    tworzenietablicy(tablica);
    drukowanieTablicy(tablica);
    zad7(tablica);
   // dodawanie(tablica);
   //drukowanieSuma(tablica);
   // kilkaOpcji(tablica);


    
    
    // tworzenietablicy2(tablica2);
   
    
    
  // if (sprawdzanieTablicy(tablica, tablica2) == true)
  // {
  //    cout << "Tablice sa identyczne";
  // }
  //  else
  //  {
  //    cout << "Tablice sa rozne";
  // }

    
}
