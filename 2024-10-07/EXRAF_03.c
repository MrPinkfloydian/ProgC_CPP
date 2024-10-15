#include <stdio.h>

int main( int argc, char *argv[] ) {

        int i;

        printf( "argc:     %d\n", argc );

        printf( "Valor por omissão:  %s\n", argv[0] );

        if ( argc == 1 ) {

                printf( "Não foram fornecidos parâmetros.\n" );

        } else {
                printf( "Parâmetros introduzidos:\n" );

                for ( i = 1; i < argc; ++i ) {

                        printf( "  %d. %s\n", i, argv[i] );

                }
        }

        return 0;
}