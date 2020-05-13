package com.mmrproduct;

import java.util.LinkedList;

public class Main {

    public static void main(String[] args) {

        LinkedList<String> countryNames = new LinkedList<String>();

        countryNames.add("Bangladesh");
        countryNames.add("America");
        countryNames.add("Canada");
        countryNames.add("Germany");
        countryNames.add("London");

        System.out.println(countryNames);
        
        /*
        for(String country : countryNames){

            System.out.println(country);

        }
        */

    }
}
