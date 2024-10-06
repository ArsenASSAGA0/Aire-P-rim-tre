#include <iostream>

int main() {
    int choix;
    float A = 0, P = 0;
    float c, Long, larg, B, H, r, a, b;

    std::cout << "Choisissez une forme:\n";
    std::cout << "1. Carré\n";
    std::cout << "2. Rectangle\n";
    std::cout << "3. Triangle\n";
    std::cout << "4. Cercle\n";
    std::cout << "Entrez votre choix (1-4): ";
    std::cin >> choix;

    switch (choix) {
        case 1:
            std::cout << "Entrez la longueur du côté du carré: ";
            std::cin >> c;
            if (c < 0) {
                std::cout << "Veuillez entrer une valeur positive.\n";
            } else {
                A = c * c;
                P = 4 * c;
            }
            break;
        case 2:
            std::cout << "Entrez la longueur du rectangle: ";
            std::cin >> Long;
            std::cout << "Entrez la largeur du rectangle: ";
            std::cin >> larg;
            if (Long < 0 || larg < 0) {
                std::cout << "Veuillez entrer des valeur de longueur et largeur positive.\n";
            } else {
                A = Long * larg;
                P = 2 * (Long + larg);
            }
            break;
        case 3:
            std::cout << "Entrez la base : ";
            std::cin >> B;
            std::cout << "Entrez le premier côté : ";
            std::cin >> a;
            std::cout << "Entrez le deuxième côté : ";
            std::cin >> b;
            std::cout << "Entrez la hauteur : ";
            std::cin >> H;
            if (B < 0 || H < 0 || a < 0 || b < 0) {
                std::cout << "Veuillez entrer des valeurs positive.\n";
            } else {
                A = 0.5 * B * H;
                P = a + b + B;
            }
            break;
        case 4:
            std::cout << "Entrez le rayon : ";
            std::cin >> r;
            if (r < 0) {
                std::cout << "Veuillez entrer une de rayon valeur positive.\n";
            } else {
                A = 3.14 * r * r;
                P = 2 * 3.14 * r;
            }
            break;
        default:
            std::cout << "Choix invalide.\n";
            return 1;
    }

    if (choix >= 1 && choix <= 4) {
        std::cout << "L'aire de votre figure est: " << A << std::endl;
        std::cout << "Le périmètre de votre figure est: " << P << std::endl;
    } else {
        std::cout << "Vous ne pouvez qu'entrer de 1 à 4.\n";
    }

    return 0;
}
