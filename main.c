#include "func.h"
#include <stdio.h>

int d = 100;

int
main()
{
    int a = 10, b = 20, sum = 0;
    int c = d;
    printf("c = %d, d = %d\n", c, d);
    char* input_ingress_packet_str =
        "00000000000200000000000181000002"
        "08004500003F0001000040119CBD0A0A"
        "0A2AC8A8011488889999002B65533031"
        "32333435363738396162636465666768"
        "696A6B6D6E6F70717273747576777879"
        "7A";
    sum = add_test123(a, b);
    printf("%d + %d = %d\n", a, b, sum);
    sum = dec(a, b);
    printf("%d + %d = %d\n", a, b, sum);
    printf("string: %s\n", input_ingress_packet_str);
    return 0;
}
