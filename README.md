# Calculette
Petit programme en C qui effectue une opération arithmétique entre deux nombres saisis par l'utilisateur.
##  Description
Ce projet demande à l'utilisateur deux nombres et un opérateur, puis affiche le résultat arrondi de l'opération, grâce à une fonction qui réalise le calcul selon l'**opérateur** choisi.
##  Fonctionnalités
| Fonction | Description | Paramètres |
|----------|-------------|------------|
| `calculette(float a, float b, char operateur)` | Effectue le calcul selon l'opérateur (`+`, `-`, `*`, `/`) et retourne le résultat | Deux nombres et un opérateur |
##  Compilation
Assurez-vous d'avoir un compilateur C installé (comme `gcc`), puis exécutez :
```bash
gcc main.c -o main -lm
```
##  Exécution
```bash
./main
```
##  Exemple d'utilisation
```
entrez un nombre: 10
entrez un nombre: 3
entrez le type d'operation(+,-,/,*): +
13
```
##  Technologies utilisées
- Langage **C**
- Compilateur **GCC**
- Bibliothèque **math.h** (fonction `round`)
