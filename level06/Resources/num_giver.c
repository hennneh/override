#include <string.h>
#include <stdio.h>

int main() {
    char *loginStr = "abcdef";
    int loginLen = strlen(loginStr);
    int v4 = (loginStr[3] ^ 0x1337) + 6221293;
    
    for ( int i = 0; i < loginLen; ++i )
    {
      if ( loginStr[i] <= 0x1F )
        return 1;
      v4 += (v4 ^ (unsigned int)loginStr[i]) % 0x539;
    }

    printf("%d\n", v4);
    return 0;
}
