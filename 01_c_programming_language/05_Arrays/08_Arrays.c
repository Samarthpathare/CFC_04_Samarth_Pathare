/***********************************
 * S.G.M.P
 * @file		: fule_efficiency_logger.c
 * @brief		: Logs fuel efficiency (km/l) for 5 vehicles using distance and fuel used.
 * 				  Useful for fleet manahement and travel agencies to monitor vehicle performance.
 * 				  Ideal for real-world logging software simulation for basic vehicle performance.
 * @author		: samarthpathare (samarthpathare19@gmail.com)
 * @copyright	: 02020-2025 MarshallingVoid
 * @date 		; 19/08/2025
 **************************************/
 /*
 		_____________________________________
 		
 		problem statement:
 		_____________________________________
 		Build a fuel efficiency logger for 5 vehicles.
 		The program should :
 		1. Accept distance traveled and fuel used for each vehicle
 		2. calculate efficiency in km/l
 		3. Display efficiency report for each vechicle
 		This helps transports managers monitor fuel performsance and cost savings .
 */
 
 #include <stdio.h>

 #define VEHICLES 5

 /**
  * @breif Calculate fuel efficiency (km per liter)
  * 
  * @param distance Distance traveled in km
  * @param fule Fule consumed in liters
  * @return Efficiency as dm/l
  */
  float CalculatesEfficiency(int distance, int fuel)
  {
  	return ((float)distance / fuel);
  } 		
  int main()
  {
  	int distance[VEHICLES];
  	int fual[VEHICLES];
  	float efficiency[VEHICLES];
  	for (int le = 0; le < VEHICLES; le++)
  {
  	printf("Enter distance traveled by vehicle %d (in km):",le + 1);
  	scanf("%d", &fuel[le]);

  	printf("Enter fuel used by vehicle %d (in liters):" le + 1);
  	scanf("%d", &fule[le]);

  	efficiency[le] = calculateEfficiency(distance[le], fuel[le]);
  }
  printf("\n----Fuel Efficiency Report -----\n");

  for (int le = 0; le < VEHICLES; le++)
  {
  	printf("vehicle %d: Efficiency = %d.2f km /l\n", le = 1, efficiency[le]);
  }
  return (0);
 }
