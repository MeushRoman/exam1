#include <iostream>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "rus");
	int x;
	start:
	printf("хотите стать профессиональным музыкантом (1 - да, 0 = нет): ");
	scanf("%d", &x);

	if (x == 1) {
		printf("Вы богаты? (1 - да, 0 = нет): ");
		scanf("%d", &x);
		if (x == 1)
		{
		next1:
			printf("Любите открываться?(1 - да, 0 = нет): ");
			scanf("%d", &x);
			if (x == 1) {
				printf("Пиво пьете?(1 - да, 0 = нет): ");
				scanf("%d", &x);
				if (x == 1) {
					printf("Хотите играть классику?(2 - не знаю, 1 - да, 0 = нет): ");
					scanf("%d", &x);
					if (x == 2) printf("Тромбон!\n");
					else if (x == 0) {
						printf("... а джаз?(1 - да, 0 = нет): ");
						scanf("%d", &x);
						if (x == 1) printf("Саксафон\n"); else {
							printf("У вас есть немецкие корни?(1 - да, 0 = нет): ");
							if (x == 1) printf("Труба\n"); else printf("Дудук\n");
						}
					}
					else {
						printf("Готовы работать круглые сутки?(1 - да, 0 = нет): ");
						scanf("%d", &x);
						if (x == 1) printf("Гобой\n"); else {
							printf("Готовы к тому, что будут проблемы с работой, даже если вы круто играете?(1 - да, 0 = нет): ");
							scanf("%d", &x);
							if (x == 1) printf("Кланет\n"); else printf("Валторна\n");
						}
					}
				}
				else {
					printf("Вы страстная натура?(1 - да, 0 = нет): ");
					scanf("%d", &x);
					if (x == 1) printf("Виолончель!\n"); else printf("домра!\n");
				}
			}
			else {
				printf("Готовы заниматься по 8 часов в день?(1 - да, 0 = нет): ");
				scanf("%d", &x);
				if (x == 1) {
					printf("Хотите учить детей?(1 - да, 0 = нет): ");
					scanf("%d", &x);
					if (x == 1) printf("Флейта\n"); else printf("Скрипка\n");
				}
				else {
					printf("Ноты знаете?(1 - да, 0 = нет): ");
					scanf("%d", &x);
					if (x == 1) printf("Арфа\n"); else printf("Альт\n");
				}
			}
		}
		else {
			printf("Любите деньги?1 - да, 0 = нет): ");
			scanf("%d", &x);
			if (x = 1) printf("забудьте о музыке\n"); else goto next1;
		}
	}
	else {
		printf("Хотите встречаться с девушками?(1 - да, 0 = нет): ");
		scanf("%d", &x);
		if (x == 1)	{
			printf("Любите глупышек?(1 - да, 0 = нет): ");
			scanf("%d", &x);
			if (x == 1) {
				printf("Любите выпить?(1 - да, 0 = нет): ");
				scanf("%d", &x);
				if (x == 1) printf("Гитара\n"); else printf("Фортепиано\n");
			}
			else {
				next2:
				printf("Вы парень?(1 - да, 0 = нет): ");
				scanf("%d", &x);
				if (x == 1) printf("Ударные\n"); else printf("Оперный пивец\n");
			}
		}
		else {
			printf("хотете встречаться с парнями?(1 - да, 0 = нет): ");
			scanf("%d", &x);
			if (x == 0) printf("Фагот\n"); else goto next2;
		}
	}
	printf("\n\n**************************************************************************\n\n");
	printf("Повторим?))(1 - да, 0 = нет): ");
	scanf("%d", &x);
	if (x == 1) {
		printf("\n\n**************************************************************************\n\n");
		goto start;
	}
	else exit;
	
}