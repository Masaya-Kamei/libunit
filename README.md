# 42 libunit

Clang unit-test framework.

## Usage example

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
