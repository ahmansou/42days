find . -type f -name "*.sh" | cut -d "." -f 2 | sed 's#.*/##'

