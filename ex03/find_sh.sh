find . -name "*.sh" | awk -F "/" '{print $NF}' | sed 's/\.[^.]*$//'
