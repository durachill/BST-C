# BST-C

# Binary Search Tree Table Implementation 🌳

[![C Standard](https://img.shields.io/badge/C-17-blue)]()
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

```=== Меню ===
1. Добавить элемент
2. Удалить элемент
3. Найти элемент
4. Вывести диапазон
5. Найти максимум
0. Выход
> 1
Введите ключ: 42
Введите значение: "Sample text"
```
## 📚 Структура проекта
```
bst-table/
├── src/
│   ├── main.c          # Основная логика меню
│   ├── bst.c           # Реализация BST
│   └── bst.h           # Интерфейс BST
├── tests/              # Тесты
├── Makefile            # Сборка
└── README.md           # Документация
```
## 🧪 Тестирование
```
make test
```
