#include <iostream>

class CalculateController {
public:
    double add(int a, int b) {
        return a + b;
    }

    double subtract(int a, int b) {
        return a - b;
    }

    double multiply(int a, int b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            std::cerr << "Error: Bilangan kedua tidak boleh kosong." << std::endl;
            return 0;
        }
    }
};

int main() {
    CalculateController calc;
    int firstValue, secondValue;
    char operation;
    bool isNext = true;
    bool isInvalid = true;

   while(isNext){
        isInvalid = true;
        std::cout << "=========== Selamat datang di kalkulator Quantum ===========\n";
        std::cout << "Masukkan Bilangan Pertama : ";
        std::cin >> firstValue;
        std::cout << "Masukkan Bilangan kedua : ";
        std::cin >> secondValue;
        
        while(isInvalid){
            std::cout << "Pilih operasi :\n1.Penjumlahan \n2.Pengurangan \n3.Perkalian \n4.Pembagian \n : ";
            std::cin >> operation;
            isInvalid = false;
            switch (operation) {
                case '1':
                    std::cout << "Hasil: " << calc.add(firstValue, secondValue) << std::endl;
                    break;
                case '2':
                    std::cout << "Hasil: " << calc.subtract(firstValue, secondValue) << std::endl;
                    break;
                case '3':
                    std::cout << "Hasil: " << calc.multiply(firstValue, secondValue) << std::endl;
                    break;
                case '4':
                    std::cout << "Hasil: " << calc.divide(firstValue, secondValue) << std::endl;
                    break;
                default:
                    isInvalid = true;
                    std::cout << "Operasi tidak valid." << std::endl;
                    break;
            }    
            std::cout << "Apakah ingin melanjutkan (y/n) : ";
            char isNextValue = 'y';
            std::cin >> isNextValue;
            if(isNextValue == 'n'){
                isNext = false;
            }
        }
        
   }

    return 0;
}