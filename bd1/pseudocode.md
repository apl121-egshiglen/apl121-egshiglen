ЗАРЛАХ Integer guests, rate, total, i, f1, f2, f3
    ЗАРЛАХ Real flour, meat, mins

    ДАВТ
        ХЭВЛЭХ "Guests: "
        ОРОЛТ guests
    ХҮРТЭЛ guests <= 0

    ДАВТ
        ХЭВЛЭХ "Buuz per person: "
        ОРОЛТ rate
    ХҮРТЭЛ rate < 1

    УТГУУД total = guests * rate
    УТГУУД flour = total * 0.02
    УТГУУД meat = total * 0.025
    УТГУУД mins = total * 0.5

    ХЭВЛЭХ "Total: ", total
    ХЭВЛЭХ "Flour: ", flour, " kg"
    ХЭВЛЭХ "Meat: ", meat, " kg"
    ХЭВЛЭХ "Time: ", mins, " min"

    ДАВТАЛТ i = 1-ЭЭС 5 ХҮРТЭЛ
        ХЭРЭВ i == 1 БОЛ
            ХЭВЛЭХ "Day 1: ", total * 0.4
        ЭСРЭГЭЭР ХЭРЭВ i == 2 БОЛ
            ХЭВЛЭХ "Day 2: ", total * 0.25
        ЭСРЭГЭЭР ХЭРЭВ i == 3 БОЛ
            ХЭВЛЭХ "Day 3: ", total * 0.15
        ЭСРЭГЭЭР
            ХЭВЛЭХ "Day ", i, ": ", total * 0.1
        ТӨГСГӨЛ ХЭРЭВ
    ТӨГСГӨЛ ДАВТАЛТ

    ХЭВЛЭХ "Enter totals for 3 families:"
    ОРОЛТ f1, f2, f3

    ДУУДАХ sortThree(f1, f2, f3)
ТӨГСГӨЛ ФУНКЦ

ФУНКЦ sortThree(Ref Integer a, Ref Integer b, Ref Integer c)
    ЗАРЛАХ Integer temp
    
    ХЭРЭВ a < b БОЛ
        УТГУУД temp = a
        УТГУУД a = b
        УТГУУД b = temp
    ТӨГСГӨЛ ХЭРЭВ

    ХЭРЭВ a < c БОЛ
        УТГУУД temp = a
        УТГУУД a = c
        УТГУУД c = temp
    ТӨГСГӨЛ ХЭРЭВ

    ХЭРЭВ b < c БОЛ
        УТГУУД temp = b
        УТГУУД b = c
        УТГУУД c = temp
    ТӨГСГӨЛ ХЭРЭВ

    ХЭВЛЭХ "Sorted: ", a, " -> ", b, " -> ", c
ТӨГСГӨЛ ФУНКЦ
