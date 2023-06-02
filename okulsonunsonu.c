#include <stdio.h>

float convertToCelsius(float temperature) {
    float celsius = (temperature - 32) * 5 / 9;
    return celsius;
}

int main() {
    int numTemperatures;
    printf("Enter the number of temperatures to convert: ");
    scanf("%d", &numTemperatures);
    
    float temperatures[numTemperatures];
    printf("Enter the temperatures in Fahrenheit:\n");
    for (int i = 0; i < numTemperatures; i++) {
        scanf("%f", &temperatures[i]);
    }
    
    printf("Temperatures in Celsius:\n");
    float sum = 0;  
    for (int i = 0; i < numTemperatures; i++) {
        float celsius = convertToCelsius(temperatures[i]);
        printf("%.2f\n", celsius);
        sum += celsius;  
    }
    
    float average = sum / numTemperatures;  
    
    
    if (average > 20) {
        printf("The weather is too nice to go out today!\n");
    } else {
        printf("The weather is not too good to go out today.\n");
    }

    
    int repeat;
    printf("Enter the number of times to repeat the temperature conversion: ");
    scanf("%d", &repeat);

    for (int i = 0; i < repeat; i++) {
        printf("Enter the temperatures in Fahrenheit:\n");
        for (int j = 0; j < numTemperatures; j++) {
            scanf("%f", &temperatures[j]);
        }

        printf("Temperatures in Celsius:\n");
        sum = 0; 
        for (int j = 0; j < numTemperatures; j++) {
            float celsius = convertToCelsius(temperatures[j]);
            printf("%.2f\n", celsius);
            sum += celsius;
        }

        average = sum / numTemperatures; 

        
        if (average > 20) {
            printf("The weather is too nice to go out today!\n");
        } else {
            printf("The weather is not too good to go out today.\n");
        }
    }
    
    return 0;
}
