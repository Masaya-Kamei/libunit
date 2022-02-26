# 42 libunit

Clang unit-test framework.

## Output example

<img width="330" alt="libunit" src="https://user-images.githubusercontent.com/50983708/155824140-2146b850-3a5c-45a9-8741-856f00db62cc.png">

## Sample script

```zsh
git clone https://github.com/Masaya-Kamei/libunit.git;
cd libunit;
make;
gcc -I./sample/test_target -I./includes -L./ -lunit sample/*/*.c;
echo -e "\n---Output---";
./a.out;
```

## Tool

- [Github Actions](https://docs.github.com/ja/actions) (CI/CD tool)
