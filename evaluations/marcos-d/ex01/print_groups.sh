#!/bin/sh
if [ -z "$FT_USER" ]; then
   echo "Erro: A Variável FT_USER nao foi definida".
   exit 1
fi
id -nG "$FT_USER" | tr ' ' ','
