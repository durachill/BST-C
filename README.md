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
```
## Сборка и запуск
```bash
git clone https://github.com/durachill/BST-C.git
cd BST-C
make && ./treeUT
```
