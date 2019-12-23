#include <unistd.h>
#include <string.h>

int main(int argc, char **argv) {
	char c;

	for (int i = 0; i < strlen(argv[1]); i++) {
		c = argv[1][i] - i;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
}