# Практична робота №10_11
Цей репозиторій cтворений для перегляду виконання практичної роботи №10 з дисципліни "Архітектура системного програмного забезпечення", виконане студентом Щур Р.І., групи ТВ-32.

## Завдання №2.7
  1)Створити просту оболонку, яка запускає команди користувача.
  
  2)Зберегти як dumbsh.c.
  
  3)Скомпілювати.
 
  4)Запустити.

## Виконання
![Pr10.7.png](Pr10.7.png)

Код, який наданий у практичній роботі, працює коректно, виконуючи команди ls та whoami у дочірньому процесі.


## Завдання №2.9 
## Виконання
![Pr10.9.png](Pr10.9.png)

Використав фрагмент коду, який наданий в практичній роботі, та дописав фрагменти,які потрібні були для повноцінної роботи програми. Тепер програма створює дочірній процес, чекає поки він завершується і виводить повідомлення про завершення.

## Завдання №2.10 
## Виконання
![Pr10.10.png](Pr10.10.png)

Використав фрагмент коду, який наданий в практичній роботі, та дописав фрагменти,які потрібні були для повноцінної роботи програми. Тепер програма циклічно 3 дочірні процеси, чекає поки вони завершуться і виводить повідомлення про завершення.

## Завдання №2.24 
Змініть приклад із відкритим файлом: спробуйте писати в нього з обох процесів із затримкою.
## Виконання
![Pr10.24.1.png](Pr10.24.1.png)

Взявши код, який наданий у лекції, та додавши до нього затримку для процесів, звіривши результати виконання, я зрозумів, що затримкою можна контролювати, який із процесів буде виконувати дії раніше. (фото,яке надане вище,показує роботу процесів без затримки)

![Pr10.24.2.png](Pr10.24.2.png)

