cmake_minimum_required(VERSION 3.10)
project(Ejercicios_2do_Corte)

set(CMAKE_CXX_STANDARD 17)

#Entrega 2
add_executable(ejercicio_twitter Entrega2/ejercicio355_twitter/main.cpp)
add_executable(ejercicio_spreadsheet Entrega2/ejercicio3484_spreadsheet/main.cpp)
add_executable(ejercicio_queen_attack Entrega2/ejercicio_queen_attack/queen_attack.cpp Entrega2/ejercicio_queen_attack/queen_attack.h)
add_executable(ejercicio_robot_simulator Entrega2/ejercicio_robot_simulator/robot_simulator.cpp Entrega2/ejercicio_robot_simulator/robot_simulator.h)

#Entrega 3
add_executable(ejercicio_authentication_manager Entrega3/ejercicio1797_authentication_manager/main.cpp)
add_executable(ejercicio_exam_tracker Entrega3/ejercicio3709_exam_tracker/main.cpp)
add_executable(ejercicio_crypto_square Entrega3/ejercicio_crypto_square/crypto_square.cpp Entrega3/ejercicio_crypto_square/crypto_square.h)
add_executable(ejercicio_bank_account Entrega3/ejercicio_bank_account/bank_account.cpp Entrega3/ejercicio_bank_account/bank_account.h)

# Entrega 4
add_executable(ejercicio_biblioteca Entrega4/Ejercicio1/src/main.cpp Entrega4/Ejercicio1/src/Libro.cpp Entrega4/Ejercicio1/src/Biblioteca.cpp)
target_include_directories(ejercicio_biblioteca PRIVATE Entrega4/Ejercicio1/include)

add_executable(ejercicio_alquiler 
    Entrega4/Ejercicio2/src/main.cpp 
    Entrega4/Ejercicio2/src/Vehiculo.cpp 
    Entrega4/Ejercicio2/src/Auto.cpp 
    Entrega4/Ejercicio2/src/Bicicleta.cpp 
    Entrega4/Ejercicio2/src/SistemaAlquiler.cpp
)
target_include_directories(ejercicio_alquiler PRIVATE Entrega4/Ejercicio2/include)
