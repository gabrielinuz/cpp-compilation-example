#!/bin/bash

# Abortar si ocurre algún error
set -e

echo "=== Fase 1: Compilación de código fuente a archivos objeto (.o) ==="
g++ -c -I./include src/utils.cpp -o utils.o
g++ -c -I./include src/operaciones_basicas.cpp -o operaciones_basicas.o
g++ -c -I./include src/operaciones_variadas.cpp -o operaciones_variadas.o
g++ -c -I./include src/menus.cpp -o menus.o
g++ -c -I./include main.cpp -o main.o
echo "[OK] Archivos objeto generados."

echo "=== Fase 2: Enlazado (Linking) ==="
g++ main.o utils.o operaciones_basicas.o operaciones_variadas.o menus.o -o programa
echo "[OK] Ejecutable 'programa' generado con éxito."

echo "=== Fase 3: Limpieza ==="
rm *.o
echo "[OK] Archivos temporales eliminados."