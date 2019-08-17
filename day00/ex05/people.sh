ldapsearch -Q "uid=z*" cn | grep '^cn: ' | sort -r --ignore-case | cut -c 5-
