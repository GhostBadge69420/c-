#include <iostream>

int main()
{

    std::string cars[][3] = {{"BMW E46 M3 GTR", "lamborghini gallardo superleggera", " Audi R8 V8 Le Mans edition"},
                            {"Mercedes-Benz SLS AMG Black Series", "Porsche 718 Cayman GT4 RS", "Volkswagen Golf Mk5 R32"},
                            {"McLaren Senna", "Ferrari 296 GTB Assetto Fiorano", "Aston Martin Valkyrie"},};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}