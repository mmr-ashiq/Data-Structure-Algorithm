package com.mmrproduct;

import java.util.HashMap;

public class HaspMapDemo {

    public static void main(String[] args) {

        //put,get
        HashMap <Integer,String> customer = new HashMap<Integer, String>();

        customer.put(101,"Jhon");
        customer.put(102,"Cena");
        customer.put(103,"Roman");

        System.out.println(customer.get(101));
        System.out.println(customer.get(102));
        System.out.println(customer.get(103));

    }



}
