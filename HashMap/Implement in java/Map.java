package com.mmrproduct;

import java.util.Map;

public class MapDemo {

    public static void main(String[] args) {
        
        Map <Integer,String> map = new HashMap<>();

        map.put(1,"Jhon");
        map.put(2,"Cena");
        map.put(3,"Roman");
        map.put(3,"Rigns"); // hashmap can not have duplicate keys, previous value will be overwrite in new value
        map.put(null, null); // Hashmap allows null key or null value
        map.remove(3);

        System.out.println(map.get(1));
        System.out.println(map.get(2));
        System.out.println(map.get(3));

    }

}
