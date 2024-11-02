#include <string>
#include <iostream>

std::string to_string_custom(int nbre, int base = 10) {
    // Geçersiz taban kontrolü
    if (base < 2 || base > 16) {
        return "";
    }

    // Negatif sayı kontrolü
    bool negatif = false;
    if (nbre < 0) {
        negatif = true;
        nbre = -nbre; // Sayıyı pozitif yap
    }

    // Taban dönüşümü
    std::string resultat = "";
    const char* chiffres = "0123456789ABCDEF";

    do {
        int reste = nbre % base;
        resultat = chiffres[reste] + resultat;
        nbre /= base;
    } while (nbre > 0);

    // Negatif işareti ekleme
    if (negatif) { // negatif = true ise bu blok çalışır
        resultat = "-" + resultat;
    }

    return resultat;
}

int main() {
    std::cout << to_string_custom(123, 16) << std::endl;  // Çıktı: 7B
    std::cout << to_string_custom(-45, 8) << std::endl;   // Çıktı: -55
    std::cout << to_string_custom(100, 10) << std::endl;  // Çıktı: 100
    std::cout << to_string_custom(50, 20) << std::endl;   // Çıktı: (boş string, geçersiz taban)
    return 0;
}
