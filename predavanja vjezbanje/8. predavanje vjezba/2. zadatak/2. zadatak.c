#include <stdio.h>

float pi();
void Poruka();

int main()
{
    float r;
    
    for(int i = 0; i <3; i++){
        scanf("%f", &r);
        Poruka();
        printf("%.2f\n", 2*r*pi());
    }
    return 0;
}

float pi (){
    return 3.14;
}

void Poruka(){
    printf("Opseg je: ");
}