#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Tree/tree.h"

void print_menu() {
    printf("\nМеню операций:\n");
    printf("1. Добавить/обновить элемент\n");
    printf("2. Удалить элемент\n");
    printf("3. Найти элемент\n");
    printf("4. Вывести диапазон\n");
    printf("5. Найти максимальный элемент\n");
    printf("0. Выход\n");
    printf("> ");
}

void handle_insert(Tree *t) {
    int key;
    char info[256];

    printf("Введите ключ: ");
    scanf("%d", &key);
    printf("Введите информацию: ");
    scanf("%255s", info);

    char *result = insert(t, key, info);
    if (result) {
        printf("Обновлено старое значение: %s\n", result);
        free(result);
    } else {
        printf("Элемент добавлен\n");
    }
}

void handle_delete(Tree *t) {
    int key;
    char *result;

    printf("Введите ключ для удаления: ");
    scanf("%d", &key);

    result = delete(t, key);
    if (result) {
        printf("Удалено: %s\n", result);
        free(result);
    } else {
        printf("Ключ не найден!\n");
    }
}

void handle_search(const Tree *t) {
    int key;
    const char *result;

    printf("Введите ключ для поиска: ");
    scanf("%d", &key);

    result = search(t, key);
    printf(result ? "Найдено: %s\n" : "Не найдено!\n", result);
}

void handle_print_range(const Tree *t) {
    int min, max;

    printf("Введите минимальный ключ: ");
    scanf("%d", &min);
    printf("Введите максимальный ключ: ");
    scanf("%d", &max);

    if (min > max) {
        printf("Ошибка: неверный диапазон!\n");
        return;
    }

    outRange(t->root, min, max);
}

void handle_find_max(const Tree *t) {
    const char *result = findMax(t);
    printf(result ? "Максимальный ключ: %s\n" : "Дерево пусто!\n", result);
}

void runInterface(Tree *t) {
    int choice;
    int running = 1;

    while (running) {
        print_menu();

        if (scanf("%d", &choice) != 1) {
            printf("Ошибка ввода!\n");
            while (getchar() != '\n'); // Очистка буфера
            continue;
        }

        switch (choice) {
            case 1: handle_insert(t); break;
            case 2: handle_delete(t); break;
            case 3: handle_search(t); break;
            case 4: handle_print_range(t); break;
            case 5: handle_find_max(t); break;
            case 0: running = 0; break;
            default: printf("Неверный выбор!\n");
        }
    }
}
