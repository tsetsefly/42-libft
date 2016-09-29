# 42_libft

## Unit-tests for libft
1. [yyang](https://github.com/yyang42/moulitest)
2. [alelievr](https://github.com/alelievr/libft-unit-test)
3. [tinfoilpancakes](https://github.com/TinfoilPancakes/libft-testing-tools): combines yyang, alelievr, [quentin](https://github.com/QuentinPerez/Maintest/tree/master/libft), and [yachaka](https://github.com/yachaka/libftASM)

## How to transfer files from one git repo to another repo
1. move into the directory(ies) and type ```rm -rf .git```
2. if there are any existing files with the old repo address type ```git rm -r --cached myFolder```
3. ```git commit -m "comments..."```
4. ```git push```

## Ways to inspect segfaults and buf overflows
```gcc -fsanitize=address```
