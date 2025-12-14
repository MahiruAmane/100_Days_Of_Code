// Write a Program To Define An Enum For Traffic Lights (RED, YELLOW, GREEN) & Print Stop, Wait Or Go Based On It's Value.

#include <stdio.h>

enum TrafficLight 
{
    RED,
    YELLOW,
    GREEN
};

void printTrafficLightAction(enum TrafficLight light) 
{
    switch (light) 
    {
        case RED:
        {
            printf("Stop\n");
            break;
        }
        case YELLOW:
        {
            printf("Wait\n");
            break;
        }
        case GREEN:
        {
            printf("Go\n");
            break;
        }
        default:
        {
            printf("Invalid Traffic Light\n");
            break;
        }
    }
}

int main() 
{
    enum TrafficLight light;
    int input;

    printf("Enter Traffic Light Color (0 For RED, 1 For YELLOW, 2 For GREEN) : ");
    scanf("%d", &input);

    light = (enum TrafficLight)input;
    printTrafficLightAction(light);
    
    return 0;
}