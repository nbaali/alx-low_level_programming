#include <stdio.h>
#include <stdlib.h>

int is_digit(char c) {
	    return (c >= '0' && c <= '9');
}

int str_to_int(char *str) {
	    int result = 0;
	        for (int i = 0; str[i]; i++) {
			        if (!is_digit(str[i])) {
					            printf("Error\n");
						                exit(98);
								        }
				        result = result * 10 + (str[i] - '0');
					    }
		    return result;
}

int main(int argc, char *argv[]) {
	    if (argc != 3) {
		            printf("Error\n");
			            return (98);
				        }

	        int num1 = str_to_int(argv[1]);
		    int num2 = str_to_int(argv[2);
		        int result = num1 * num2;

			    printf("%d\n", result);
			        return (0);
}

