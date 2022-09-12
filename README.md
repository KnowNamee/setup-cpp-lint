# setup-cpp-lint

### Про проверку синтаксиса и форматирование

(файлик README надо будет отформатировать)

1) вначале git clone этого проекта

> ***Unix***

2) Качаем ```clang-tidy``` и ```clang-format``` (если нету) :

***TODO***: написать про установку на windows / linux / mac

3) Как запускать :
```bash
(Из консоли)
mkdir build
cmake -S . -B build
cmake --build build --config . --target task

(CLion)
делает всё за нас, нужно просто нажать на кнопочку Run target
```

***TODO***
Если всё устраивает, то дописать ```.clang-tidy / .clang-format```






