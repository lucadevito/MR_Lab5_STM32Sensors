/*----------------------------------------------------------------------------
LAB EXERCISE - Environmental sensors measurements
 ----------------------------------------
	In this exercise we will read the environmental sensors on the Nucleo sensors shield (X-NUCLEO-IKS01A1)
	with the help of the ST Nucleo Sensor Shield library which is compatible with the MBED API.
	Then we will send the measurements via USB to our PC using serial communication.
	We can then display the results using a terminal emulation program (e.g. Termite).

	At the same time the program blinks the on board LED to show alivness.


	GOOD LUCK!
 *----------------------------------------------------------------------------*/


#include "mbed.h"
#include "platform/mbed_thread.h"
#include "XNucleoIKS01A3.h"

// Blinking rate in milliseconds
#define BLINKING_RATE_MS                                                    1000

// Create a DigitalOut objects for the LED

// Create a Serial objects to communicate via USB

// Create 2 Ticker objects for recurring interrupts. One for blink a LED and the other one to update the sensor lectures periodicly

// Declare and define a measurement update flag

// Handler for the aliveness LED; to be called every 0.5s

// Handler for the measurements update; rise a flag every 3 seconds

/* Create sensor shield object */

int main()
{
    
    /* Enable sensors */

    /* Attach functions to be called by the Ticker objects at a specific interval in seconds */

    while (true) {
        /* Check for the measurements update flag */

            /* Read the environmental sensors */

            /* Calculate temperature in Fahrenheit and Kelvins */

            /*Send data through serial communication */

            /* Turn down the measurements update flag */

        /*Wait for interrupts*/

    }
}
