## groups $nours | tr ' ' ','
## groups $daemon | tr ' ' ','
id -Gn $FT_USER | tr ' ' ',' | tr -d '\n'
