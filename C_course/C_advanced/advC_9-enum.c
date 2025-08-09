// ENUMERATION
#include <stdio.h>

enum Size {
    Small = 27,
    Medium = 31,
    Large = 35,
    ExtraLarge = 40
};
int main() {
    
    enum Size shoeSize1 = Small;
    enum Size shoeSize2 = Medium;
    enum Size shoeSize3 = Large;
    enum Size shoeSize4 = ExtraLarge;
    
    printf("%d\n", shoeSize1);
      printf("%d\n", shoeSize2);
        printf("%d\n", shoeSize3);
          printf("%d\n", shoeSize4);
    
    return 0;
}
/*
enum Size {
    Small,
    Medium,
    Large,
    ExtraLarge
};
int main() {
    enum Size shoeSize;
    shoSize = ExtraLarge;  //--->3
    
    printf("%d", shoeSize);

return 0;
}*/