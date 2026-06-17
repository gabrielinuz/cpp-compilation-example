#!/bin/bash

# Abortar si ocurre algún error
set -e

echo "=== Fase 2: Enlazado (Linking) ==="
g++ -I./include main.cpp src/utils.cpp src/operaciones_basicas.cpp src/operaciones_variadas.cpp src/menus.cpp -o programa.bin
echo "[OK] Ejecutable 'programa' generado con éxito."
