#!/bin/bash

# Verificar que se haya pasado un argumento
if [ -z "$1" ]; then
    echo "Error: No se proporcionó un mensaje para el commit."
    echo "Uso: ./gitall.sh \"mensaje del commit\""
    exit 1
fi

# Asignar el argumento a una variable
COMMIT_MESSAGE="$1"

# Hacer git add, git commit y git push
git add .
git commit -m "$COMMIT_MESSAGE"
git push
