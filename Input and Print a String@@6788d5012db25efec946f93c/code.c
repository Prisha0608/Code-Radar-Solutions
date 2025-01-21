#include <stdio.h>

void fun(){
    char a[100];
    scanf("%s",&a);
    printf("You entered: %s",a);

}
int main(){
    fun();
    return 0;
}