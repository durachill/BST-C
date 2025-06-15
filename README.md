# BST-C

          XXXXX          
          X   X          
          X   X          
          XXXXX          
         X     X         
        X       X        
       X         X       
     XXXXX     XXXXX     
     X   X     X   X     
     X   X     X   X     
     XXXXX     XXXXX     
    X     X         X    
   X       X         X   
  X         X         X  
XXXXX     XXXXX     XXXXX
X   X     X   X     X   X
X   X     X   X     X   X
XXXXX     XXXXX     XXXXX


# Binary Search Tree Table Implementation 🌳

[![C Standard](https://img.shields.io/badge/C-23-blue)]()
[![License](https://img.shields.io/badge/License-MIT-green)]()
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)]()

Реализация упорядоченной таблицы на основе бинарного дерева поиска (BST) на языке C.

## 📝 Описание задания
Программа предоставляет интерфейс для работы с упорядоченной таблицей, реализованной как BST:
- Ключ: целое число
- Значение: строка произвольной длины
- Запрещены дубликаты ключей

## 🌟 Функционал
- ➕ **Вставка элемента** (с заменой значения при существующем ключе)
- ✖️ **Удаление элемента** по ключу
- 🔍 **Поиск элемента** по ключу
- 📊 **Вывод элементов** в прямом порядке (pre-order) в заданном диапазоне ключей
- 🏆 **Поиск элемента** с максимальным ключом

## 🛠 Технические детали
```c
struct Node {
    int key;
    char* info;
    struct Node* left;
    struct Node* right;
};

typedef struct {
    Node * root;
}Tree;
```
## 🚀 Запуск проекта
```bash
git clone https://github.com/durachill/BST-C.git
cd BST-C
make && ./treeUT
```
## 🖥 Пример работы

```
=== Меню ===
1. Добавить/обновить элемент
2. Удалить элемент
3. Найти элемент
4. Вывести диапазон
5. Найти максимальный элемент
0. Выход
> 1
Введите ключ: 42
Введите информацию: "Sample text"
```
## 📚 Структура проекта
```
bst-c/
├── src/
│   └── main.c          # Основная логика меню
├── Tree
│   ├── tree.h          # Заголовочный файл
│   └── tree.c          # Реализация методов дерева
├── Interface
│   └── interface.c     # Реализация диалога с пользователем
├── Makefile            # Сборка
└── README.md           # Документация
```
## 🧪 Тестирование
```
make test
```
