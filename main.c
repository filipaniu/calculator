#include <stdio.h>

double add(double a, double b) {
    return a + b;
}

double sub(double d, double e) {
    return d - e;
}

double multi(double x, double y) {
    return x * y;
}

double div(double g, double h) {
    return g / h;
}

void menu(int option) {
    double a, b, wynik;
    switch (option) {
        case 1:
            printf("Wybrales dodawanie\n");
            printf("podaj pierwsza liczbe ");
            scanf("%lf", &a);
            printf("podaj druga liczbe ");
            scanf("%lf", &b);
            wynik = add(a, b);
            printf("suma = %f \n", wynik);
            break;
        case 2:
            printf("Wybrales odejmowanie\n");
            printf("podaj pierwsza liczbe ");
            scanf("%lf", &a);
            printf("podaj druga liczbe ");
            scanf("%lf", &b);
            wynik = sub(a, b);
            printf("roznica = %f \n", wynik);
            break;
        case 3:
            printf("Wybrales mnozenie\n");
            printf("podaj pierwsza liczbe ");
            scanf("%lf", &a);
            printf("podaj druga liczbe ");
            scanf("%lf", &b);
            wynik = multi(a, b);
            printf("iloczyn = %f \n", wynik);
            break;
        case 4:
            printf("Wybrales dzielenie\n");
            printf("podaj pierwsza liczbe ");
            scanf("%lf", &a);
            printf("podaj druga liczbe ");
            scanf("%lf", &b);
            wynik = div(a, b);
            printf("iloraz = %f \n", wynik);
            break;
        default:
            printf("wybrales nie prawidlowa opcje menu\n");
    }
}

int main() {
    int dec;
    printf("CALCULATOR\nWYBIERZ OPERACJE Z MENU:\n");
    printf("1. DODAWANIE\n2. ODEJMOWANIE\n3. MNOZENIE\n4. DZIELENIE\n");

    while (1) {
        printf("\nWpisz numer operacji ");
        scanf("%d", &dec);
        menu(dec);
    }
}
