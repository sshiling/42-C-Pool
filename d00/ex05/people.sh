ldapsearch -QLLL '(uid=z*)' cn | grep cn | sort -r | cut -c5-
