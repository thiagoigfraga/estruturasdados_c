cmake_minimum_required(VERSION 3.23)
project(estruturas C)

set(CMAKE_C_STANDARD 99)

add_executable(estruturas main.c listasequencial/listasequencialfuncoes.h listasequencial/listasequencialestrutura.h listaligada/listaligadaestrutura.h listaligada/listaligadafuncoes.h
        listaligadadinamica/listaligadadinamicaestrutura.h listaligadadinamica/listaligadadinamicafuncoes.h
        )
