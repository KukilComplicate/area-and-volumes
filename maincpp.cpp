#include <iostream>
#include <stdio.h>

#include "areas.h"
#include "volumes.h"

using namespace std;

int main()
{
    float size = 10.0f;
    float volumes;
    volumes = TestVolume(size);

    cout << "Volume Test: " << volumes << endl;
    printf("Volume printed Sucess!\n");
    
    return 0;
}
