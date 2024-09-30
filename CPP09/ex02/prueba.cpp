#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <sys/time.h>   // Para gettimeofday (medir tiempo en microsegundos)
#include <iomanip>      // Para setprecision (formatear la salida)
#include <cstdlib>      // Para std::atoi

// Función para obtener el tiempo actual en microsegundos
long getCurrentTimeInMicroseconds() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return time.tv_sec * 1000000 + time.tv_usec;
}

// Función que ejecuta y mide el tiempo para un vector
void sortAndMeasureTimeVector(std::vector<int>& vec) {
    long start = getCurrentTimeInMicroseconds();

    // Aquí iría tu implementación del algoritmo Ford-Johnson para el vector
    std::sort(vec.begin(), vec.end());  // Sustituir con tu algoritmo

    long end = getCurrentTimeInMicroseconds();
    long elapsed = end - start;

    // Imprimir el tiempo formateado con 5 decimales
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: "
              << std::fixed << std::setprecision(5) << (double)elapsed  << " us" << std::endl;
}

// Función que ejecuta y mide el tiempo para un deque
void sortAndMeasureTimeDeque(std::deque<int>& deq) {
    long start = getCurrentTimeInMicroseconds();

    // Aquí iría tu implementación del algoritmo Ford-Johnson para el deque
    std::sort(deq.begin(), deq.end());  // Sustituir con tu algoritmo

    long end = getCurrentTimeInMicroseconds();
    long elapsed = end - start;

    // Imprimir el tiempo formateado con 5 decimales
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque: "
              << std::fixed << std::setprecision(5) << (double)elapsed << " us" << std::endl;
}

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Error: No input provided." << std::endl;
        return 1;
    }

    std::vector<int> vec;
    std::deque<int> deq;

    // Rellenar los contenedores con los argumentos proporcionados
    for (int i = 1; i < argc; ++i) {
        int num = std::atoi(argv[i]);
        if (num <= 0) {
            std::cerr << "Error: All numbers must be positive integers." << std::endl;
            return 1;
        }
        vec.push_back(num);
        deq.push_back(num);
    }

    // Mostrar el vector antes de ordenar
    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // Medir el tiempo para el vector
    sortAndMeasureTimeVector(vec);

    // Medir el tiempo para el deque
    sortAndMeasureTimeDeque(deq);

    // Mostrar el vector después de ordenar
    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
