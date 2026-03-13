# Bazele Criptologiei - C++

Acest repo va fi imbogatit cu algoritmi dezvoltati pentru laboratoarele de Bazele Criptologiei. 

Repo-ul este structurat sub forma unei biblioteci reutilizabile care poate fi imbogatita ulterior.

## Functionalitati :

* **Analiza Frecventei Caracterelor:** Citeste un fisier text de la o locatie specificata si determina frecventa fiecarui caracter intr-un mod cat mai eficient dpdv computational.

* **Gestiune automata a fisierelor:** Daca utilizatorul nu ofera un nume, aplicatia va genera automat un fisier 'rezultat.txt', unde vor fi stocate rezultatele.

## Structura :

* 'cripto.h' - Header-ul bibliotecii care va contine clasele de functii.

* 'cripto.cpp' - Implementarea logicii functiilor declarate in header.

* 'main.cpp' - Entry point-ul de unde se pot executa/test functiile.

## Compilare & rulare:

Evident, este nevoie de un compilator pentru C/C++, care se poate configura/instala prin intermediul MSYS64('https://www.msys2.org/') sau un IDE, precum VS sau CLion(JetBrains):

Ulterior prin intermediul unui terminal(bash/PowerShell samd):

g++ main.cpp cripto.cpp -o cripto_app
.\cripto_app