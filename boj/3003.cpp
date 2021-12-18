#include <stdio.h>

int main()
{

	int king=0, queen=0, rook=0, bishop=0, knight=0, pawn=0;
	scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
	printf("%d %d %d %d %d %d", 1 - king, 1 - queen, 2 - rook, 2 - bishop, 2 - knight, 8 - pawn);

	return 0;
}