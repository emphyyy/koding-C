#include <stdio.h>


int main() {
char str[80];
int i;
    printf("Введите строку символов: ");
fgets(str, 80, stdin);

for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'b') {
        str[i] = str[i] - 32; // Преобразуем в заглавную букву
    }
}

printf("Результат: %s", str);

return 0;
    
}
