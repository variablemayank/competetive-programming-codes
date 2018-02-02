	#include<cstdio>
int main() {
    char str[] = "// Run the following code and follow the instructions in the output%c#include<cstdio>%cint main() {%c    char str[] = %c%s%c;%c    printf(str, 10, 10, 10, 34, str, 34, 10, 10, 10);%c}%c";
    printf(str, 10, 10, 10, 34, str, 34, 10, 10, 10);
}
