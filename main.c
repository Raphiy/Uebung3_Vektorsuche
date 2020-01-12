/*
 * main.c
 *
 <<<<<<< HEAD
 *  Created on: 28.11.2019
 *      Author: Froemberg Raphael
 */

#include <stdio.h>
#include "find.h"

int main() {

	/* Gesuchter Wert, Index & Array */
	int eingabe = -1;
	int index = 0;
	int f[10] = { 1, 5, 33, 66, 37, 66, 28, 76, 99, 43 };

	/* Auffruf der Funktion feind und gleichzeitige Überprüfung ob die FUnktion 1 oder 0 zurückliefert und Ausgabe. */
	if (find(eingabe, f, &index) == 1) {
		printf("Der Wert %d befindet sich an der %d. Stelle.\n", eingabe,
				index + 1);
	} else {
		printf(" Der Wert %d befindet sich nicht im Vektor.\n", eingabe);
	}
}
