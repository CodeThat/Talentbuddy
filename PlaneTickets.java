/*
Plane tickets

A plane ticket contains a departure location and a destination. Locations are identified by unique integer numbers.

Given a set of plane tickets used by a traveler

Your task is to

    write a function that reconstructs the traveler’s itinerary and prints to the standard output (stdout) the IDs of each visited location in the order they were visited (one per line)
    please note that no location was visited twice in the traveler's journey

Note that your function will receive the following arguments:

    departure_ids
        an array of integer numbers representing the IDs of the departure locations for all given plane tickets
    destination_ids
        which is an array of integers representing the corresponding IDs of the destinations for all given plane tickets

e.g. departure_ids[i] and destination_ids[i] represent the locations on ticket i

Data constraints

    the length of the arrays above will not exceed 20,000 entries
*/


import java.util.*;

class MyClass {

    public static void get_journey(Integer[] departure_ids, Integer[] destination_ids) 
    {           
        HashMap<Integer,Integer> depDes = new HashMap<Integer, Integer>();
        
        for(int i = 0; i < departure_ids.length; i++)
        {
            depDes.put(departure_ids[i], destination_ids[i]);  
        }
          
        Integer next = findFirst(depDes);
        Integer temp;
        int size = depDes.size();
        
        while(size > 1)
        {
            System.out.print(next + " ");
            temp = next;
            next = depDes.get(next);
            depDes.remove(temp); 
            size--;
        }
        
        System.out.print(next + " " + depDes.get(next));
    }
    
    public static Integer findFirst(HashMap<Integer, Integer> depDes)
    {
        Integer key = -1;
        Integer value = -1;
        for (Map.Entry<Integer, Integer> entry : depDes.entrySet()) 
        {
            key = entry.getKey();

            if(!depDes.containsValue(key))
            {
                System.out.print(key + " ");  
                depDes.remove(key);
                value = entry.getValue();
                break;
            }
        }
        return value;
    }
}
