#include <stdio.h>

void sortThree(int *a, int *b, int *c) {
    int temp;
    if (*a < *b) { temp = *a; *a = *b; *b = temp; }
    if (*a < *c) { temp = *a; *a = *c; *c = temp; }
    if (*b < *c) { temp = *b; *b = *c; *c = temp; }
}

int main() {
    int guests, buuz_per_person;
    int total_buuz;
    float flour_kg, meat_kg, prep_time_min;
    int day_buuz;
    int family_buuz[3];
    
    printf("=== Сэдэв 2: Цагаан сарын бууз тооцоолуур ===\n\n");
    
    do {
        printf("Зочдын тоог оруулна уу (эерэг бүхэл тоо): ");
        if (scanf("%d", &guests) != 1 || guests <= 0) {
            printf("Буруу оролт! Та заавал эерэг тоо оруулах ёстой.\n");
            while(getchar() != '\n');
            guests = -1;
        }
    } while (guests <= 0);
    
    do {
        printf("Нэг хүнд ногдох буузны тоог оруулна уу (1-100): ");
        if (scanf("%d", &buuz_per_person) != 1 || buuz_per_person < 1 || buuz_per_person > 100) {
            printf("Буруу оролт! 1-ээс 100-ийн хооронд оруулна уу.\n");
            while(getchar() != '\n');
            buuz_per_person = -1;
        }
    } while (buuz_per_person < 1 || buuz_per_person > 100);
    
    total_buuz = guests * buuz_per_person;
    flour_kg = (total_buuz * 20) / 1000.0;
    meat_kg = (total_buuz * 25) / 1000.0;
    prep_time_min = total_buuz * 0.5;
    
    printf("\n--- Ерөнхий тооцоолуур ---\n");
    printf("Нийт шаардлагатай бууз: %d ширхэг\n", total_buuz);
    printf("Хэрэгцээт гурил: %.2f кг\n", flour_kg);
    printf("Хэрэгцээт мах: %.2f кг\n", meat_kg);
    printf("Бэлтгэх нийт хугацаа: %.1f минут\n\n", prep_time_min);
    
    printf("--- Шинийн 1-нээс 5-ны өдрийн хэрэглээний таамаглал ---\n");
    printf("%-12s %-15s\n", "Өдөр", "Буузны тоо");
    printf("----------------------------------------\n");
    
    for (int i = 1; i <= 5; i++) {
        if (i == 1) {
            day_buuz = total_buuz * 0.40;
        } else if (i == 2) {
            day_buuz = total_buuz * 0.25;
        } else if (i == 3) {
            day_buuz = total_buuz * 0.15;
        } else {
            day_buuz = total_buuz * 0.10;
        }
        printf("Өдөр %-7d %-15d\n", i, day_buuz);
    }
    
    printf("\n--- 3 айлын буузны тоог харьцуулж эрэмбэлэх ---\n");
    for (int i = 0; i < 3; i++) {
        do {
            printf("%d-р айлын буузны тоог оруулна уу: ", i + 1);
            if (scanf("%d", &family_buuz[i]) != 1 || family_buuz[i] < 0) {
                printf("Буруу оролт! Сөрөг биш тоо оруулна уу.\n");
                while(getchar() != '\n');
                family_buuz[i] = -1;
            }
        } while (family_buuz[i] < 0);
    }
    
    sortThree(&family_buuz[0], &family_buuz[1], &family_buuz[2]);
    
    printf("\nАйлуудын буузны тооны эрэмбэ (Ихээс бага руу):\n");
    printf("1. Хамгийн их: %d ширхэг\n", family_buuz[0]);
    printf("2. Дунд: %d ширхэг\n", family_buuz[1]);
    printf("3. Хамгийн бага: %d ширхэг\n", family_buuz[2]);
    
    return 0;
}
