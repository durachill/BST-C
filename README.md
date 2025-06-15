# BST-C | Binary Search Tree Implementation 🌳

[![C Standard](https://img.shields.io/badge/C-23-blue?logo=c)]()
[![License](https://img.shields.io/badge/License-MIT-green?logo=opensourceinitiative)]()
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen?logo=githubactions)]()
[![Code Size](https://img.shields.io/github/languages/code-size/durachill/BST-C)]()
[![Last Commit](https://img.shields.io/github/last-commit/durachill/BST-C?color=blue)]()

Реализация упорядоченной таблицы на основе бинарного дерева поиска (BST) на языке C с интерактивным интерфейсом.

## 🎯 Основные возможности
| Функция | Описание |
|---------|----------|
| `➕ Вставка` | Добавление элемента с автоматической сортировкой |
| `✖️ Удаление` | Удаление элемента по ключу |
| `🔍 Поиск` | Быстрый поиск по ключу |
| `📊 Обход` | Вывод элементов в прямом порядке (pre-order) |
| `🏆 Максимум` | Поиск элемента с максимальным ключом |

## 🛠 Техническая реализация
```c
#pragma once

typedef struct Node {
    int key;                // Ключ элемента
    char* info;             // Строка данных
    struct Node* left;      // Левое поддерево
    struct Node* right;     // Правое поддерево
} Node;

typedef struct {
    Node* root;             // Корень дерева
    size_t count;           // Количество элементов
} Tree;
```

## 🚀 Быстрый старт
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
📊 Производительность
```
Операция      Сложность
Вставка       O(log n)
Удаление      O(log n)
Поиск         O(log n)
Обход         O(h)
```
