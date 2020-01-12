/*
 * find.c
 *
 *  Created on: 01.12.2019
 *      Author: Froemberg Raphael
 */

#include <stdio.h>
#include "find.h"

int find(int x, int f[], int *index) {

	/* Für jede Stelle des Arrays die nicht leer ist, wird überprüft ob der Inhalt gleich der gesuchten Zahl ist. */
	for (int i = 0; f[i] != '\0'; i++){

		/* Wenn der Inhalt = die gescuhte Zahl ist, wird deren Position i Index gespeichert. */
		if (f[i]==x){
			*index = i;
			return 1;
		}
	}
	return 0;
}
