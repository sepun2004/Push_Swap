#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{

if(argc!=2) {
printf("Ha olvidado su nombre.\n");
exit(1);
}
printf("Hola %s", argv[1]);
}